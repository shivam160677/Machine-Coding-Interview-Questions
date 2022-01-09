//
//  FlyInterface.hpp
//  Strategy
//
//  Created by Shivam Garg on 09/01/22.
//

#ifndef FlyInterface_hpp
#define FlyInterface_hpp

#include <iostream>
using namespace std;

//Abstract class
class Ifly{
public:
    virtual void Fly()=0; //pure virtual function
};

class ItFlys: public Ifly{
public:
    void Fly();
};

class CantFly: public Ifly{
public:
    void Fly();
};

#endif /* FlyInterface_hpp */
