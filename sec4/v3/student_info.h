#pragma once

struct Student_Info {
    std::string name = "";
    double midterm = 0;
    double final = 0;
    std::vector<double> homework_scores;
};

Student_Info & string2student(const std::string & inputStr, Student_Info & student, bool & do_record);