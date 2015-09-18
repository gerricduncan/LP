//
//  lp.h
//  LP
//
//  Created by Gary Duncan on 9/17/15.
//  Copyright (c) 2015 Gary Duncan. All rights reserved.
// test

#ifndef __LP__lp__
#define __LP__lp__

#include <stdio.h>
#include <vector>
#include <iostream>
#include <cmath>
#include <string>

struct constraint{
    std::vector<short int> a; //Coefficients
    std::string comp; // Comparison operator
    double b; // Limit
};

class lp{
public:
    bool min; // Minimize = 1, maximize = 0;
    std::vector<short int> c; // Costs
    std::vector<constraint> constraints; // Constraints
    bool validForm() const;
    void print();
private:
    std::string vecLine(std::vector<short int>&);
};



#endif /* defined(__LP__lp__) */
