//
//  main.cpp
//  Property_Hunt
//
//  Created by Shivam Garg on 17/01/22.
//

#include <iostream>
#include <fstream>
#include "PropertyHuntService.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    PropertyHuntService *servicePtr= PropertyHuntService::getPropertyHuntServiceInstance();
    fstream file1, file2;
    file1.open("InputTestCase.txt");
    file2.open("OutputTestCase.txt");
    file2.clear();
    
    file2<<"Id  "<<"Title  "<<"Location  "<<"Price  "<<"Size  "<<"Rooms  "<<"AvailableFor  "<<endl;
    string userInput;
    while(1)
    {
        getline(file1, userInput);
        if(userInput=="X")
            break;
        servicePtr->processUserInput(file1, file2, userInput);
    }
    file1.close();
    file2.close();
    return 0;
}
