//
//  Strategy.cpp
//  MCRound
//
//  Created by Shivam Garg on 03/02/22.
//

#include "Strategy.hpp"

bool Strategy1::compareList(vector<int> course, vector<int> preReq){
    sort(course.begin(), course.end()); //{1, 2, 4}
    sort(preReq.begin(), preReq.end()); //{2, 4}
    
    int ind1=0, ind2=0;
    int count=0, n1=course.size(),n2=preReq.size();
    while(ind1<n1 && ind2<n2){
        if(course[ind1]==preReq[ind2])
        {
            count++;
            ind1++;
            ind2++;
        }
        else if(course[ind1]<preReq[ind2])
        {
            ind1++;
        }
        else
            ind2++;
    }
    if(count==n2)
        return true;
    return false;
}

bool Strategy2::compareList(vector<int> course, vector<int> preReq){
    //TO Be defined
    return true;
}
