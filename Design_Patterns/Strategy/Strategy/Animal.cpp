//
//  Animal.cpp
//  Strategy
//
//  Created by Shivam Garg on 09/01/22.
//

#include "Animal.hpp"

void Animal::fly(){
    //Not sure which base class function is going to be called
    flyProperty->Fly();
}

void Animal::setFlyInterface(Ifly *ptr){
    flyProperty=ptr;
}
