//
//  ExpenseDistributionFctory.hpp
//  SplitwiseService
//
//  Created by Shivam Garg on 22/01/22.
//

#ifndef ExpenseDistributionFctory_hpp
#define ExpenseDistributionFctory_hpp

#include <iostream>
using namespace std;
#include "ExpenseDistribution.hpp"

enum expenseType{EQUAL, PERCENT, EXACT};

class ExpenseDistributionFactory{
public:
    static IExpenseDistribution *createExpenseIntance(expenseType type);
};

#endif /* ExpenseDistributionFctory_hpp */
