//
// Created by Eason Nie on 2018-12-31.
//
#include <iostream>

int main() {

    double b = 3.5;
    int i = {b};    //This will give error.

    std::cout << i << std::endl;
    return 0;
}

/*
 * The generalized use of curly braces for initialization was introduced as part of the
new standard. This form of initialization previously had been allowed only in more
restricted ways. For reasons we’ll learn about in § 3.3.1 (p. 98), this form of
initialization is referred to as list initialization. Braced lists of initializers can now be
used whenever we initialize an object and in some cases when we assign a new value
to an object.

 * When used with variables of built-in type, this form of initialization has one
 * important property: The compiler will not let us list initialize variables of built-in type if
 * the initializer might lead to the loss of information:
 */