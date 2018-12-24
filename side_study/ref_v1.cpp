#include <iostream>     //std::cout


typedef struct a {
    int a;
    double b;
} struct_a;


void change_to_eight(int & x) {
    x = 8;
}

void change_struct_to_eight_ptr(struct_a * x) {
    x->b = 2.0;
}

void change_struct_to_eight(struct_a & x) {
    x.b = 2.0;
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
    struct_a st_a;
    st_a.a = 3;
    st_a.b = 1.0;

    (&st_a)->a = 4;
    change_struct_to_eight_ptr(&st_a);

    std::cout << st_a.a << std::endl;
    std::cout << st_a.b << std::endl;

}

//https://blog.csdn.net/tianxiaolu1175/article/details/46889523
