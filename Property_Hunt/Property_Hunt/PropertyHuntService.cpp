//
//  PropertyHuntService.cpp
//  Property_Hunt
//
//  Created by Shivam Garg on 17/01/22.
//

#include "PropertyHuntService.hpp"

PropertyHuntService *PropertyHuntService::propertyPtr=NULL;

PropertyHuntService::PropertyHuntService(){
    
}

PropertyHuntService *PropertyHuntService::getPropertyHuntServiceInstance(){
    if(propertyPtr==NULL)
    {
        propertyPtr=new PropertyHuntService();
    }
    return propertyPtr;
        
}

bool PropertyHuntService::registerUser(string userName){
    User newUser(userName);
    userList.push_back(newUser);
    return true;
}

bool PropertyHuntService::registerProperty(string userName, string propertyTitle, string location, int price, AvailablilityType availabilityType, int size, int noOfRooms){
    Property newProperty(propertyTitle, location, price, size, noOfRooms);
    int propId= newProperty.getPropertyId();
    properties[propId]=newProperty;
    userListedProperties[userName].push_back(propId);
    return true;
}

bool PropertyHuntService::shortListProperty(string userName, int propertyId){
    userShortListedProperties[userName].push_back(propertyId);
    return true;
}

vector<Property> PropertyHuntService::viewShortListed(string userName){
    vector<Property>result;
    for(int propId: userShortListedProperties[userName])
    {
        result.push_back(properties[propId]);
    }
    return result;
}

void PropertyHuntService::processUserInput(string op){
    if(op=="Register User"){
        string userName;
        getline(cin, userName);
        registerUser(userName);
    }
    else if(op=="Register Property"){
        string userName;
        cout<<"Enter UserName"<<endl;
        getline(cin, userName);
        string propertyTitle;
        cout<<"Enter Title"<<endl;
        getline(cin, propertyTitle);
        string location;
        cout<<"Enter Location"<<endl;
        getline(cin, location);
        int price;
        cout<<"Enter Price"<<endl;
        cin>>price;
        string propType;
        AvailablilityType atype;
        cout<<"Enter Type(RENT/SALE)"<<endl;
        getline(cin, propType);
        if(propType=="RENT")
            atype=RENT;
        else
            atype=SALE;
        int size;
        cout<<"Enter size"<<endl;
        cin>>size;
        int noOfRooms;
        cout<<"Enter number of rooms"<<endl;
        cin>>noOfRooms;
        registerProperty(userName, propertyTitle, location, price, atype, size, noOfRooms);
    }
    else if(op=="ShortList")
    {
        string userName;
        getline(cin, userName);
        int propId;
        cin>>propId;
        shortListProperty(userName, propId);
    }
    else if(op=="View ShortList")
    {
        string userName;
        getline(cin, userName);
        vector<Property>result=viewShortListed(userName);
        displayProperties(result);
    }
    else if(op=="Search")
    {
        vector<Property> propertyList;
        for(auto it: properties){
            propertyList.push_back(it.second);
        }
        ISearch *ptr= new BasicSearch(propertyList);
        cout<<"Enter Price Filter(Y/N)";
        char priceFilter;
        int lowPrice, highPrice;
        cin>>priceFilter;
        if(priceFilter=='Y')
        {
            cin>>lowPrice>>highPrice;
            ptr=new PriceSearchWrapper(ptr, lowPrice, highPrice);
        }
        
        cout<<"Enter Location Filter(Y/N)";
        string loc;
        char locFilter;
        cin>>locFilter;
        if(locFilter=='Y')
        {
            cin>>loc;
            ptr=new LocationSearchWrapper(ptr, loc);
        }
        vector<Property>ans=ptr->Search();
        displayProperties(ans);
    }
    else
    {
        cout<<"Wrong operation"<<endl;
    }
}

void PropertyHuntService::displayProperties(vector<Property>prop){
    cout<<"Id  "<<"Title  "<<"Location  "<<"Price  "<<"Size  "<<"Rooms  "<<"AvailableFor  ";
    for(int i=0;i<prop.size();i++){
        cout<<prop[i].getPropertyId()<<"  "
        <<prop[i].getPropertyTitle()<<"  "
        <<prop[i].getLocation()<<"  "
        <<prop[i].getSize()<<"  "
        <<prop[i].getNoOfRooms()<<"  "
        <<prop[i].getAvailablityType()<<"  ";
    }
}




