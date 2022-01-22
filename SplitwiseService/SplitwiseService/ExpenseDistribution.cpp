//
//  ExpenseDistribution.cpp
//  SplitwiseService
//
//  Created by Shivam Garg on 22/01/22.
//

#include "ExpenseDistribution.hpp"

void ExactDistribution::distribution(const int &userId, const vector<int>&users, const vector<int>&division, unordered_map<int, unordered_map<int,int>>&expenses, const int &total){
    for(int i=0;i<users.size();i++){
        int usedId2=users[i];
        if(usedId2==userId)
            continue;
        int val=division[i];
        expenses[userId][usedId2]+=val;
        expenses[usedId2][userId]-=val;
    }
}

void EqualDistribution::distribution(const int &userId, const vector<int>&users, const vector<int>&division, unordered_map<int, unordered_map<int,int>>&expenses, const int &total){
    int n=(int)users.size();
    int val=total/n;
    for(int i=0;i<n;i++){
        int userId2=users[i];
        if(userId2==userId)
            continue;
        
        expenses[userId][userId2]+=val;
        expenses[userId2][userId]-=val;
    }
}

void PercentDistribution::distribution(const int &userId, const vector<int>&users, const vector<int>&division, unordered_map<int, unordered_map<int,int>>&expenses, const int &total){
    int n=(int)users.size();
    int percentTotal=0;
    for(int i=0;i<n;i++){
        percentTotal+=division[i];
    }
    if(percentTotal!=100){
        _Exit(0);
    }
    for(int i=0;i<n;i++){
        int userId2=users[i];
        if(userId2==userId)
            continue;
        
        int val=(division[i]*total)/100;
        
        expenses[userId][userId2]+=val;
        expenses[userId2][userId]-=val;
    }
}
