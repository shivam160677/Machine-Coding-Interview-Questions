//
//  Property.hpp
//  Property_Hunt
//
//  Created by Shivam Garg on 17/01/22.
//

#ifndef Property_hpp
#define Property_hpp

#include <iostream>
#include <string>
using namespace std;

enum AvailablilityType{RENT, SALE};

class Property{
    int propertyId;
    string propertyTitle;
    string location;
    int price;
    int size;
    int noOfRooms;
    AvailablilityType availablilityType;
    static int propId;
public:
    Property(string propertyTitle="", string location="", int price=0, int size=0, int noOfRooms=0);
    int getPropertyId();
    string getPropertyTitle();
    string getLocation();
    int getPrice();
    int getSize();
    int getNoOfRooms();
    AvailablilityType getAvailablityType();
    
    void setPropertyId(int propertyId);
    void setPropertyTitle(string propertyTitle);
    void setLocation(string location);
    void setPrice(int price);
    void setSize(int size);
    void setNoOfRooms(int noOfRooms);
    void setAvailablityType(AvailablilityType availabilityType);
};

#endif /* Property_hpp */
