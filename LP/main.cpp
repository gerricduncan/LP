//
//  main.cpp
//  LP
//
//  Created by Gary Duncan on 9/17/15.
//  Copyright (c) 2015 Gary Duncan. All rights reserved.
//

#include <iostream>
#include "lp.h"

// Comparison operator for unrestricted is !!
int main(int argc, const char * argv[]) {
    lp orig;

    orig.min = false;
    orig.c = {2,-1,3};
    constraint c1 = {{1,-1,4},"<=",8};
    constraint c2 = {{2,2,-5},"=",4};
    constraint c3 = {{1,0,1},">=",6};
    constraint c4 = {{1,0,0},">=",0};
    constraint c5 = {{0,0,1},">=",0};
    constraint c6 = {{0,1,0},"!!",0};
    
    orig.constraints = {c1,c2,c3,c4,c5,c6};
    
    if (orig.validForm())
        orig.print();
    else
        std::cout << "Invalid form";
    return 0;
}
