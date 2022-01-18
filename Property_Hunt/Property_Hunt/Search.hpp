//
//  Search.hpp
//  Property_Hunt
//
//  Created by Shivam Garg on 17/01/22.
//

#ifndef Search_hpp
#define Search_hpp

#include <stdio.h>
#include <vector>
#include "Property.hpp"

//Decorator pattern to implement basic Search and all wrappers
class ISearch{
public:
    virtual vector<Property> Search()=0;
};

// class returns all properties
class BasicSearch: public ISearch{
    vector<Property> properties;
public:
    BasicSearch(vector<Property> prop): properties(prop){};
    vector<Property> Search(){
        return properties;
    }
};

class SearchWrapper: public ISearch{
protected:
    ISearch *searchPtr;
public:
    SearchWrapper(ISearch *ptr): searchPtr(ptr){};
    virtual vector<Property> Search(){
        return searchPtr->Search();
    };
};

class PriceSearchWrapper: public SearchWrapper{
    int lowPrice, highPrice;
public:
    PriceSearchWrapper(ISearch *ptr, int lowPrice, int highPrice): SearchWrapper(ptr), lowPrice(lowPrice), highPrice(highPrice){};
    vector<Property> Search();
};

class LocationSearchWrapper: public SearchWrapper{
    string loc;
public:
    LocationSearchWrapper(ISearch *ptr, string location): SearchWrapper(ptr), loc(location){};
    vector<Property> Search();
};



#endif /* Search_hpp */
