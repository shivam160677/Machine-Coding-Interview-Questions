//
//  SplitwiseService.cpp
//  SplitwiseService
//
//  Created by Shivam Garg on 22/01/22.
//

#include "SplitwiseService.hpp"

SplitwiseService *SplitwiseService::ptr=NULL;

SplitwiseService::SplitwiseService(){
    
}

SplitwiseService *SplitwiseService::getServiceInstance(){
    if(ptr==NULL){
        ptr=new SplitwiseService();
    }
    return ptr;
}

vector<vector<int>> SplitwiseService::show(){
    vector<vector<int>>ans;
    for(auto it:expenses){
        int uId=it.first;
        unordered_map<int,int>mp=it.second;
        for(auto it2:mp){
            int uId2=it2.first;
            int amount=it2.second;
            if(amount>0)
            {
                ans.push_back({uId, uId2, amount});
            }
        }
    }
    return ans;
}

vector<vector<int>> SplitwiseService::showUserId(string userName){
    int userId=userIdMapping[userName];
    vector<vector<int>>ans;
    int uId=userId;
    unordered_map<int,int>mp=expenses[userId];
    for(auto it2:mp){
        int uId2=it2.first;
        int amount=it2.second;
        if(amount>0)
        {
            ans.push_back({uId, uId2, amount});
        }
        else
        {
            ans.push_back({uId2, uId, -1*amount});
        }
    }
    return ans;
}

void SplitwiseService::addUser(int userId, string userName){
    User newUser(userName, userId);
    users.push_back(newUser);
    userIdMapping[userName]=userId;
}

void SplitwiseService::addExpense(string userName, vector<int> users,
                                  expenseType type, vector<int> division, int total){
    
    IExpenseDistribution *ptr= ExpenseDistributionFactory::createExpenseIntance(type);
    ptr->distribution(userIdMapping[userName], users, division, expenses, total);
    
}
