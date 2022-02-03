//
//  Course.hpp
//  MCRound
//
//  Created by Shivam Garg on 03/02/22.
//

#ifndef Course_hpp
#define Course_hpp

#include <iostream>
#include<string>
#include<vector>
using namespace std;

class Course{
    int courseId;
    string title;
    vector<int>preRequisites;
public:
    Course(){};
    Course(int id, string courseTitle, vector<int>preReq){
        courseId=id;
        title=courseTitle;
        preRequisites=preReq;
    }
    
    int getCourseId(){
        return courseId;
    }
    string getTitle(){
        return title;
    }
    vector<int>getPreRequisites(){
        return preRequisites;
    }
    void addPreRequisites(int id){
        if(find(preRequisites.begin(), preRequisites.end(), id)==preRequisites.end())
        preRequisites.push_back(id);
    }
    void removePreRequisites(int id){
        remove(preRequisites.begin(), preRequisites.end(), id);
    }
};

#endif /* Course_hpp */
