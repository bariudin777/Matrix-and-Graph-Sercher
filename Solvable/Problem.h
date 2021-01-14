//
// Created by daniel on 1/13/19.
//

#ifndef EX4_PROBLEM_H
#define EX4_PROBLEM_H

#include <string>
#include <iostream>

using namespace std;


template <class T>
class Problem{

public:
    virtual string problemToString(T * problem);

};


#endif //EX4_PROBLEM_H
