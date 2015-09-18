//
//  lp.cpp
//  LP
//
//  Created by Gary Duncan on 9/17/15.
//  Copyright (c) 2015 Gary Duncan. All rights reserved.
//

#include "lp.h"

bool lp::validForm() const{
    auto numVariables = c.size();
    for (auto i : constraints)
        if (i.a.size() != numVariables)
            return false;
    return true;
}


void lp::print(){
    std::cout << (min ? "minimize " : "maximize ");
    std::cout << vecLine(c) << std::endl;
    std::cout << "such that " << std::endl;
    for (auto i : constraints)
        std::cout << vecLine(i.a) << i.comp << i.b << std::endl;
}

std::string lp::vecLine(std::vector<short int>& v){
    std::string s;
    for (unsigned int i = 0; i < v.size(); i++) {
        s+=(v[i] < 0 ? "-" : "+");
        if (i == 0 && s == "+")
            s.clear();
        s+=(abs(v[i]) == (short int)(1) ? "" : std::to_string(abs(v[i])));
        s+="x";
        s+=std::to_string(i+1);
    }
    return s;
}




