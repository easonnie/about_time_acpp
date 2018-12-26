#include <iostream>                     //std::cout
#include <string>                       //std::string
#include <vector>                       //std::vector
#include <boost/algorithm/string.hpp>   //boost::algorithm::split

struct Student_Info {
    std::string name = "";
    double midterm = 0;
    double final = 0;
    std::vector<double> homework_scores;
};


Student_Info & string2student(const std::string & inputStr, Student_Info & student, bool & do_record) {
    if (inputStr.empty() || inputStr == "\n") {
        do_record = false;
        return student;
    }
    do_record = true;
    std::vector<std::string> tokens;
    boost::algorithm::split(tokens, inputStr, boost::is_any_of(","));
    student.name = tokens[0];

    if (tokens.size() <= 3) {
        do_record = false;
        return student;
    }

    try {
        student.midterm = std::stod(tokens[1]);
        student.final = std::stod(tokens[2]);

        for (int i = 3; i < tokens.size(); i++) {
            student.homework_scores.push_back(std::stod(tokens[i]));
        }

    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
        do_record = false;
    }

    return student;
}

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