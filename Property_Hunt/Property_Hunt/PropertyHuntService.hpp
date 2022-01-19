//
//  PropertyHuntService.hpp
//  Property_Hunt
//
//  Created by Shivam Garg on 17/01/22.
//

#ifndef PropertyHuntService_hpp
#define PropertyHuntService_hpp

#include <iostream>
#include <fstream>
#include <unordered_map>
#include "Property.hpp"
#include "User.hpp"
#include <vector>
#include "Search.hpp"

class PropertyHuntService{
    unordered_map<int, Property>properties; //list of properties
    unordered_map<string, vector<int>>userListedProperties; //list of properties available to a user
    unordered_map<string, vector<int>>userShortListedProperties; //list of properties short listed by a user
    vector<User>userList;
    static PropertyHuntService *propertyPtr;
    //Singleton class
    PropertyHuntService();
public:
    static PropertyHuntService* getPropertyHuntServiceInstance();
    void processUserInput(fstream &f1, fstream &f2, string op);
    bool registerUser(string userName);
    bool registerProperty(string userName, string propertyTitle, string location, int price, AvailablilityType availabilityType, int size, int noOfRooms);
    
    vector<Property> SearchProperties();
    bool shortListProperty(string userName, int propertyId);
    vector<Property> viewShortListed(string userName);
    void displayProperties(vector<Property> prop, fstream &f2);
};

#endif /* PropertyHuntService_hpp */
