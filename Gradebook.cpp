#include <iostream>
#include "Gradebook.h"

void Gradebook::addStudent(string fName, string lName, string id) {
    Student s(fName, lName, id);
    this->students.push_back(s);
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
