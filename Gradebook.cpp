#include <iostream>
#include <exception>
#include "Gradebook.h"

bool studentVectorContains(vector<Student> vec, string fName, string lName, string id){
    for(Student s : vec){
        if(s.getFName() == fName || s.getLName() == lName || s.getId() == id){
            return true;
        }
    }
    return false;
}

void Gradebook::addStudent(string fName, string lName, string id) {
    if(studentVectorContains(this->students, fName, lName, id)){
        throw invalid_argument("This student already exits.");
    }else {
        Student s(fName, lName, id);
        this->students.push_back(s);
    }
}

void Gradebook::addAssignment(const string &name, int points) {
    try{
        for(Student &student : this->students){
            student.assign(name, points);
        }
        this->assignments.push_back(name);
    }catch(exception &e){
        cout << e.what();
    }
}

Student *Gradebook::getStudentByFullName(string name) {
    for(Student &student : this->students){
        if(student.getFName() + " " + student.getLName() == name){
            return &student;
        }
    }
    return nullptr;
}

vector<Student> Gradebook::getStudents() {
    return this->students;
}

void Gradebook::enterGrade(string fullName, string assignmentName, int grade) {
    if(getStudentByFullName(fullName) != nullptr){
        getStudentByFullName(fullName)->setGrade(assignmentName, grade);
    }else{
        throw invalid_argument("This student does not exist.");
    }
}

string Gradebook::report() {
    string res = "\t\t";
    for(string s : this->assignments){
        res += s + "\t\t";
    }
    for(Student s : this->getStudents()){
        res += "\n" + s.getLName() + ", " + s.getFName() + ":\n\t";
        for(const auto &pair : s.getAssignments()){
            res += "\t" + to_string(pair.second.second) + "/" + to_string(pair.second.first) + "\t";
        }
    }
    return res;
}
