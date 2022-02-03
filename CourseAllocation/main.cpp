//
//  main.cpp
//  MCRound
//
//  Created by Shivam Garg on 03/02/22.
//

#include <iostream>
#include "CurriculumService.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    CurriculumService *ptr=CurriculumService::getServiceInstance();
    cout<<"Apply courses result:"<<endl;
    bool res=ptr->applyForAnyCourse(1, 3);
    if(res)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
    cout<<"Edit PreRequisites For course 1:";
    cout<<"Before: "<<endl;
    ptr->printPreRequisitesForCourse(1);
    ptr->editPreRequisites(1, {{ADD, 5}, {DELETE, 2}});
    
    cout<<"After: "<<endl;
    ptr->printPreRequisitesForCourse(1);
    return 0;
}
