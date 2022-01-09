//
//  User.cpp
//  Splitwise
//
//  Created by Shivam Garg on 15/09/21.
//

#include "User.hpp"

User::User(string uId){
    userId=uId;
}

string User::getUserId()
{
    return userId;
}

unordered_map<string, int> User::getOwedList()
{
    return owedUsers;
}

int User::getOwedAmountUser(string uId){
    if(owedUsers.find(uId)!=owedUsers.end())
    {
        return owedUsers[uId];
    }
    return -1;
}

void User::setOwedAmountUser(string uId, int amount){
    owedUsers[uId]=amount;
}
