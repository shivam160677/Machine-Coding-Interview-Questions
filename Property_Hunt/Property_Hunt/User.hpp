//
//  User.hpp
//  Property_Hunt
//
//  Created by Shivam Garg on 17/01/22.
//

#ifndef User_hpp
#define User_hpp

#include <stdio.h>
#include <string>
using namespace std;

class User{
    string userName;
    int userId;
    static int userIdCount;
public:
    User(string userName);
    string getUserName();
    int getUserId();
};

#endif /* User_hpp */
