#include <algorithm>    // std::sort
#include <ios>
#include <iostream>     // std::cout
#include <string>       // std::string
#include <vector>       // std::vector

int main() {

    std::cout << "Please enter your first name: ";
    std::string name;
    std::getline(std::cin, name);

    std::cout << "Hello " << name << " !" << std::endl;

    std::cout << "Please enter your midterm and final exam grades: ";
    double midterm, final;
    std::cin >> midterm >> final;

    std::cout << "Enter all your homework grades, "
                 "followed by end-of-file: ";

//    uint count = 0;
//    double sum = 0;

    double x;
    std::vector<double> homework;
    typedef std::vector<double>::size_type double_vec_sz;   //synonym type define. The scope is current scope

//    std::cout << homework[0] << std::endl;

    for(int i = 0; i < 3; i++) {
        std::cin >> x;
        homework.push_back(x);
//        sum += x;
    }

    double_vec_sz size = homework.size();
    std::sort(homework.begin(), homework.end());


    double_vec_sz mid = size / 2;

    double median;

    median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2
                            : homework[mid];

    std::cout << size - 100 << std::endl;
//    std::cout << size / 0 << std::endl;
    std::cout << median << std::endl;

//    std::cout << "Your final grade is "
//                << 0.2 * midterm + 0.4 * final + 0.4 * sum / count
//                << std::endl;
}

/*
 * Review
 * 1. Remember to use typedef
 * std::vector<double> homework;
 * typedef std::vector<double>::size_type double_vec_sz;   //synonym type define. The scope is current scope
 * std::vector<double>::size_type is an 'unsigned integral type' like all standard library size types.
 * Caution:
 *  If ordinary integers and unsigned integers combined in expressions, the ordinary integer is converted to unsigned.
 *  if size < 100, then size - 100 will end up with a random number.
 *
 *  100 / 0, divide by zero will not give any error or exception.
 *
 * 2. C++ do not check out of bound.
 * homework[0] will return exit code 11.
 */