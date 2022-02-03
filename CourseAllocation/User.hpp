//
//  User.hpp
//  MCRound
//
//  Created by Shivam Garg on 03/02/22.
//

#ifndef User_hpp
#define User_hpp

#include <iostream>
#include <string>
#include<vector>
using namespace std;

class User{
    string name;
    int userId;
    vector<int>userCourses;
public:
    User(){};
    User(string userName, int id, vector<int>courses){
        name=userName;
        userId=id;
        userCourses=courses;
    }
    
    string getName(){
        return name;
    }
    int getUserId(){
        return userId;
    }
    vector<int>getCourses(){
        return userCourses;
    }
};

#endif /* User_hpp */
