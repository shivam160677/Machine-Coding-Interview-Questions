//
//  User.cpp
//  Property_Hunt
//
//  Created by Shivam Garg on 17/01/22.
//

#include "User.hpp"

int User::userIdCount=0;

User::User(string userName){
    this->userName=userName;
    userId=userIdCount++;
}

string User::getUserName(){
    return userName;
}

int User::getUserId(){
    return userId;
}
