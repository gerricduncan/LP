//
//  main.cpp
//  LP
//
//  Created by Gary Duncan on 9/17/15.
//  Copyright (c) 2015 Gary Duncan. All rights reserved.
//

#include <iostream>
#include "lp.h"

int main(int argc, const char * argv[]) {
    lp orig;
    orig.min = false;
    orig.c = {2,-1,3};
    orig.constraints = {
        {{1,-1,4,},"<=",8},
        {2,2,-5},{1,0,1},{1,0,0},{0,0,1},{0,1,0}};
    orig.b = {8,4,6,0,0,0};
    orig.comp = {"<=","=",">=",">=",">="," unrestricted"};
    
    if (orig.validForm())
        orig.print();
    else
        std::cout << "Invalid form";
    return 0;
}
