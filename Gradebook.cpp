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

void Gradebook::addAssignment(string name, int points) {
    try{
        for(Student student : students){
            student.assign(name, points);
        }
        this->assignments.push_back(name);
    }catch(exception &e){
        cout << e.what();
    }
}

Student Gradebook::getStudentByID(string id) {
    for(Student student : students){
        if(student.getId() == id){
            return student;
        }
    }
    return Student("error", "error", "error");
}
