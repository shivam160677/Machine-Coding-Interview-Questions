//
//  FlyInterface.cpp
//  Strategy
//
//  Created by Shivam Garg on 09/01/22.
//

#include "FlyInterface.hpp"

void ItFlys::Fly(){
    cout<<"Can Fly comfortably"<<endl;
}

void CantFly::Fly(){
    cout<<"Don't know how to fly"<<endl;
}
