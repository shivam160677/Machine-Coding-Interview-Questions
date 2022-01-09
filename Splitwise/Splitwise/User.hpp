//
//  User.hpp
//  Splitwise
//
//  Created by Shivam Garg on 15/09/21.
//

#ifndef User_hpp
#define User_hpp

#include <iostream>
#include<string>
#include<unordered_map>
using namespace std;

class User{
    string userId, name, email, phoneNo;
public:
    User(string uId);
    int getOwedAmountUser(string uId);
    void setOwedAmountUser(string uId, int amount);
    string getUserId();
    unordered_map<string, int> getOwedList();
};

#endif /* User_hpp */
