^{
    <#code#>
}//
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

void lp::parseLine(std::string s){
    s.erase(remove_if(s.begin(), s.end(), isspace), s.end());
    for (unsigned int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            <#statements#>
        }
        switch (isalpha(s[i])) {
            case <#constant#>:
                <#statements#>
                break;
                
            default:
                break;
        }
 
        
    }
}

void lp::print(){
    std::cout << (min ? "minimize " : "maximize ");
    std::cout << vecLine(c) << std::endl;
    std::cout << "such that " << std::endl;
    for (auto i : constraints)
        std::cout << vecLine(i.a) << i.comp << i.b << std::endl;
}

std::string lp::vecLine(std::vector<double>& v){
    std::string s;
    s += v[0];
    for (unsigned int i = 1; i < v.size(); i++) {
        s+=(v[i] < 0 ? "-" : "+");
        s+=fabs(v[i]);
        s+="x";
        s+=i+1;
    }
    return s;
}




