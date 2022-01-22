//
//  ExpenseDistribution.hpp
//  SplitwiseService
//
//  Created by Shivam Garg on 22/01/22.
//

#ifndef ExpenseDistribution_hpp
#define ExpenseDistribution_hpp

#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class IExpenseDistribution{
public:
    virtual void distribution(const int &userId, const vector<int>&users, const vector<int>&division, unordered_map<int, unordered_map<int,int>>&expenses, const int &total)=0;
};

class ExactDistribution: public IExpenseDistribution{
public:
    void distribution(const int &userId, const vector<int>&users, const vector<int>&division, unordered_map<int, unordered_map<int,int>>&expenses, const int &total);
};

class EqualDistribution: public IExpenseDistribution{
public:
    void distribution(const int &userId, const vector<int>&users, const vector<int>&division, unordered_map<int, unordered_map<int,int>>&expenses, const int &total);
};

class PercentDistribution: public IExpenseDistribution{
public:
    void distribution(const int &userId, const vector<int>&users, const vector<int>&division, unordered_map<int, unordered_map<int,int>>&expenses, const int &total);
};

#endif /* ExpenseDistribution_hpp */
