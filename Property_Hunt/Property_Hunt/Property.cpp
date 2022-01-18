//
//  Property.cpp
//  Property_Hunt
//
//  Created by Shivam Garg on 17/01/22.
//

#include "Property.hpp"

int Property::propId=0;

Property::Property(string propertyTitle, string location, int price, int size, int noOfRooms){
    this->propertyId=propId++;
    this->propertyTitle=propertyTitle;
    this->location=location;
    this->price=price;
    this->size=size;
    this->noOfRooms=noOfRooms;
//    this->availablilityType=availablilityType;
}

int Property::getSize(){
    return size;
}

int Property::getPrice(){
    return price;
}

int Property::getNoOfRooms(){
    return noOfRooms;
}

int Property::getPropertyId(){
    return propertyId;
}

string Property::getPropertyTitle(){
    return propertyTitle;
}

string Property::getLocation(){
    return location;
}

AvailablilityType Property::getAvailablityType(){
    return availablilityType;
}

void Property::setPropertyId(int propertyId){
    this->propertyId=propertyId;
}

void Property::setPropertyTitle(string propertyTitle){
    this->propertyTitle=propertyTitle;
}
void Property::setLocation(string location){
    this->location=location;
}
void Property::setPrice(int price){
    this->price=price;
}
void Property::setSize(int size){
    this->size=size;
}
void Property::setNoOfRooms(int noOfRooms){
    this->noOfRooms=noOfRooms;
}
void Property::setAvailablityType(AvailablilityType availablilityType){
    this->availablilityType=availablilityType;
}
