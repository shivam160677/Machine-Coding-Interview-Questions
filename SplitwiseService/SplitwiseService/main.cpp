//
//  main.cpp
//  SplitwiseService
//
//  Created by Shivam Garg on 22/01/22.
//

#include <iostream>
#include <fstream>
#include "SplitwiseService.hpp"
using namespace std;

void processUserInput(fstream &f1, fstream &f2){
    string op="";
    SplitwiseService *ptr=SplitwiseService::getServiceInstance();
    ptr->addUser(1, "u1");
    ptr->addUser(2, "u2");
    ptr->addUser(3, "u3");
    ptr->addUser(4, "u4");
    while(1)
    {
        f1>>op;
        if(op=="X")
            break;
        if(op=="SHOW")
        {
            string s;
            vector<vector<int>>ans;
            f1>>s;
            if(s=="-1")
                ans=ptr->show();
            else
            {
                ans=ptr->showUserId(s);
            }
            for(int i=0;i<ans.size();i++){
                vector<int>vec=ans[i];
                f2<<"User"<<vec[1]<<" owes User"<<vec[0]<<" "<<vec[2]<<endl;
            }
            f2<<endl;
        }
        else if(op=="EXPENSE"){
            string user;
            f1>>user;
            int total;
            f1>>total;
            int n;
            f1>>n;
            vector<int>users(n);
            vector<int>division(n);
            for(int i=0;i<n;i++){
                f1>>users[i];
            }
            string type;
            expenseType etype;
            f1>>type;
            if(type=="PERCENT"){
                etype=PERCENT;
                for(int i=0;i<n;i++){
                    f1>>division[i];
                }
            }
            else if(type=="EXACT"){
                etype=EXACT;
                for(int i=0;i<n;i++){
                    f1>>division[i];
                }
            }
            else{
                etype=EQUAL;
            }
            ptr->addExpense(user, users, etype, division, total);
        }
    }
}

int main(int argc, const char * argv[]) {
    fstream f1, f2;
    f1.open("InputCase.txt");
    f2.open("OutputCase.txt");
    f2.clear();
    processUserInput(f1, f2);
    return 0;
}
