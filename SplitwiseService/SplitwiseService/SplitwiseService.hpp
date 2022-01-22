//
//  SplitwiseService.hpp
//  SplitwiseService
//
//  Created by Shivam Garg on 22/01/22.
//

#ifndef SplitwiseService_hpp
#define SplitwiseService_hpp

#include <iostream>
#include <unordered_map>
#include<vector>
#include "User.hpp"
#include "ExpenseDistributionFctory.hpp"
using namespace std;


class SplitwiseService{
    //username and id mapping
    unordered_map<string, int>userIdMapping;
    unordered_map<int, unordered_map<int,int>>expenses;
    vector<User>users;
    
    //Singleton
    SplitwiseService();
    static SplitwiseService *ptr;
public:
    static SplitwiseService *getServiceInstance();
    vector<vector<int>> show();
    vector<vector<int>> showUserId(string userName);
    void addExpense(string userName, vector<int>users, expenseType type, vector<int>division, int total);
    void addUser(int userId, string userName);
};

#endif /* SplitwiseService_hpp */
