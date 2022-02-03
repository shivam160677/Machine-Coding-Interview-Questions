//
//  Strategy.hpp
//  MCRound
//
//  Created by Shivam Garg on 03/02/22.
//

#ifndef Strategy_hpp
#define Strategy_hpp

#include <iostream>
#include <vector>
using namespace std;

class IStrategy{
public:
    virtual bool compareList(vector<int>course, vector<int>preReq)=0;
};

class Strategy1: public IStrategy{
public:
    bool compareList(vector<int>course, vector<int>preReq);
};

class Strategy2: public IStrategy{
public:
    bool compareList(vector<int>course, vector<int>preReq);
};

#endif /* Strategy_hpp */
