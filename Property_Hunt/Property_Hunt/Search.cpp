//
//  Search.cpp
//  Property_Hunt
//
//  Created by Shivam Garg on 17/01/22.
//

#include "Search.hpp"

vector<Property> PriceSearchWrapper::Search(){
    vector<Property>prop= searchPtr->Search();
    vector<Property>result;
    for(int i=0;i<prop.size();i++){
        int propPrice=prop[i].getPrice();
        if(propPrice>=lowPrice && propPrice<=highPrice){
            result.push_back(prop[i]);
        }
    }
    return result;
}

vector<Property> LocationSearchWrapper::Search(){
    vector<Property>prop= searchPtr->Search();
    vector<Property>result;
    for(int i=0;i<prop.size();i++)
    {
        if(prop[i].getLocation()==loc)
            result.push_back(prop[i]);
    }
    return result;
}
