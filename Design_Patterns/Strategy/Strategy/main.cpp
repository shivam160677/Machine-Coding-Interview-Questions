//
//  main.cpp
//  Strategy
//
//  Created by Shivam Garg on 09/01/22.
//

#include <iostream>
#include "Animal.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    Animal dog;
    dog.setFlyInterface(new CantFly);
    dog.fly();
    
    Animal parrot;
    parrot.setFlyInterface(new ItFlys);
    parrot.fly();
    return 0;
}
