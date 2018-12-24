#include <iostream>     //std::cout
#include <vector>       //std::vector
#include <algorithm>    //std::sort
#include <stdexcept>    //std::domain_error


double grade(double midterm, double final, double homework_s) {
    return 0.2 * midterm + 0.4 * final + 0.4 * homework_s;
}


double median(std::vector<double> vec) {
    typedef std::vector<double>::size_type vec_sz;
    vec_sz size = vec.size();

    if (size == 0)
        throw std::domain_error("Median of an empty vector");   // func's argument is outsize the set of values that the function can accept.

    std::sort(vec.begin(), vec.end());

    vec_sz mid = size / 2;
    return size % 2 == 0 ? (vec[mid] + vec[mid - 1]) / 2
                        : vec[mid];
}

// An important note here:
// We use the "std::vector<double> vec" as argument, this will copy the entire vector.
// Because we sort the vector and we don't want the outside vector to be changed

int main() {
    std::cout << "Hello" << std::endl;

    return 0;
}

/*
 *  1. We use the "std::vector<double> vec" as argument, this will copy the entire vector.
 *      Because we sort the vector and we don't want the outside vector to be changed
 *
 *
 */