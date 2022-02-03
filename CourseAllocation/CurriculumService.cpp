//
//  CurriculumService.cpp
//  MCRound
//
//  Created by Shivam Garg on 03/02/22.
//

#include "CurriculumService.hpp"

CurriculumService *CurriculumService::servicePtr=NULL;

CurriculumService *CurriculumService::getServiceInstance(){
    if(servicePtr==NULL)
        servicePtr= new CurriculumService();
    return servicePtr;
}

CurriculumService::CurriculumService(){
    vector<int>vec={4};
    User user1("Shivam", 1, vec);
    
    vec={3, 4};
    User user2("Deepak", 2, vec);
    
    vec={1};
    User user3("Vikas", 3, vec);
    
    users[user1.getUserId()]=user1;
    users[user2.getUserId()]=user2;
    users[user3.getUserId()]=user3;
    
    vec={2, 3};
    Course course1(1, "Maths", vec);
    
    vec={1};
    Course course2(2, "Maths", vec);
    
    vec={2, 4};
    Course course3(3, "Maths", vec);
    
    vec={1,2};
    Course course4(4, "Maths", vec);
    
    vec={2,3};
    Course course5(5, "Maths", vec);
    courses[course1.getCourseId()]=course1;
    courses[course2.getCourseId()]=course2;
    courses[course3.getCourseId()]=course3;
    courses[course4.getCourseId()]=course4;
    courses[course5.getCourseId()]=course5;
    
    adminInfo.push_back({"admin1", "1234"});
    adminInfo.push_back({"admin2", "1234"});
}

bool CurriculumService::authorize(){
    string name, password;
    cout<<"Enter Username"<<endl;
    cin>>name;
    cout<<"Enter Password"<<endl;
    cin>>password;
    for(int i=0;i<adminInfo.size();i++){
        if(adminInfo[i].first==name && adminInfo[i].second==password){
            return true;
        }
    }
    return false;
}

bool CurriculumService::applyForAnyCourse(int userId, int courseId){
    IStrategy *ptr=new Strategy1();
    return ptr->compareList(users[userId].getCourses(), courses[courseId].getPreRequisites());
}

void CurriculumService::editPreRequisites(int courseId, vector<pair<OPERATIONTYPE, int>> editList){
    authorize();
    for(int i=0;i<editList.size();i++){
        OPERATIONTYPE op=editList[i].first;
        int val=editList[i].second;
        if(op==ADD){
            courses[courseId].addPreRequisites(val);
        }
        else{
            courses[courseId].removePreRequisites(val);
        }
    }
}

void CurriculumService::printPreRequisitesForCourse(int courseId){
    vector<int>preq=courses[courseId].getPreRequisites();
    for(int i=0;i<preq.size();i++){
        cout<<preq[i]<<" ";
    }
    cout<<endl;
}
