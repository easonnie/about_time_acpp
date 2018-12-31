#include <vector>
#include <string>
#include <iostream>
#include "student_info.h"


int main() {
    std::vector<Student_Info> students;
    std::string cur_line;
    bool do_record = true;

    while (true) {
        Student_Info cur_student;
        getline(std::cin, cur_line);

        if (cur_line == "EOF") {
            break;
        }

        string2student(cur_line, cur_student, do_record);

        if (do_record) {
            students.push_back(cur_student);
        }
    }

    return 0;
}

/*
 *  Review:
 *  T& denotes a reference to the type T.   argument to such parameters must be Ivalues. **star**
 *
 *  Use "#pragma once" in the first line of header file to prevent duplicate inclusion.
 *
 */