//
//  main.cpp
//  Property_Hunt
//
//  Created by Shivam Garg on 17/01/22.
//

#include <iostream>
#include "PropertyHuntService.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    PropertyHuntService *servicePtr= PropertyHuntService::getPropertyHuntServiceInstance();
    while(1)
    {
        string userInput;
        getline(cin, userInput);
        if(userInput=="X")
            break;
        servicePtr->processUserInput(userInput);
    }
    return 0;
}
