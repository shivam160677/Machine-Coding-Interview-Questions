//
//  CurriculumService.hpp
//  MCRound
//
//  Created by Shivam Garg on 03/02/22.
//

#ifndef CurriculumService_hpp
#define CurriculumService_hpp

#include <iostream>
#include <unordered_map>
#include<vector>
#include <utility>
#include "User.hpp"
#include "Course.hpp"
#include "Strategy.hpp"
using namespace std;

enum OPERATIONTYPE{ADD, DELETE};

class CurriculumService{
    unordered_map<int, User>users; //list of users
    unordered_map<int, Course>courses; //list of courses
    vector<pair<string,string>>adminInfo;
    
    //Singleton pattern
    CurriculumService();
    static CurriculumService* servicePtr;
    bool authorize();
public:
    static CurriculumService* getServiceInstance();
    bool applyForAnyCourse(int userId, int courseId);
    void editPreRequisites(int courseId, vector<pair<OPERATIONTYPE, int>> editList);
    void printPreRequisitesForCourse(int courseId);
};

#endif /* CurriculumService_hpp */
