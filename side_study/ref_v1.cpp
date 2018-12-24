#include <iostream>     //std::cout


void change_to_eight(int & x) {
    x = 8;
}

//void change_to_eight(int const & x) {
//    x = 8;
//}
// error: cannot assign to variable 'x' with const-qualified type 'const int &'

void change_to_eight_ptr(int * p) {
    *p = 8;
}

//void change_to_eight_ptr(int const * p) {
//    *p = 8;
//}
//error: read-only variable is not assignable


int return_some_thing() {
    int x = 3;
    int & b = x;
    return b;
}


int main() {
    int x = 3;
    change_to_eight(x);
//    change_to_eight_ptr(&x);
//    int x = return_some_thing();
    std::cout << x << std::endl;
}