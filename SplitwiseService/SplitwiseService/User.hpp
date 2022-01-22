//
//  User.hpp
//  SplitwiseService
//
//  Created by Shivam Garg on 22/01/22.
//

#ifndef User_hpp
#define User_hpp

#include <iostream>
using namespace std;

class User{
    string username;
    int userId;
public:
    User(string uName, int uId): username(uName), userId(uId){}
    void setUsername(string uname){
        username=uname;
    }
    void setUserId(int userId){
        this->userId=userId;
    }
    
    int getUserId(){
        return userId;
    }
    
    string getUsername(){
        return username;
    }
};

#endif /* User_hpp */
