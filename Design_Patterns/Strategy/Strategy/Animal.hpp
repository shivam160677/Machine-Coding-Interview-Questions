//
//  Animal.hpp
//  Strategy
//
//  Created by Shivam Garg on 09/01/22.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <iostream>
#include "FlyInterface.hpp"
using namespace std;

class Animal{
    Ifly *flyProperty;
public:
    Animal(Ifly *ptr=nullptr): flyProperty(ptr){};
    void setFlyInterface(Ifly *ptr); //Can change interface at runtime
    void fly();
};

#endif /* Animal_hpp */
