//
//  ExpenseDistributionFctory.cpp
//  SplitwiseService
//
//  Created by Shivam Garg on 22/01/22.
//

#include "ExpenseDistributionFctory.hpp"

IExpenseDistribution *ExpenseDistributionFactory::createExpenseIntance(expenseType type){
    switch(type){
        case EQUAL:
            return new EqualDistribution();
        case EXACT:
            return new ExactDistribution();
        case PERCENT:
            return new PercentDistribution();
    }
    return NULL;
}
