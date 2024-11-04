#include <stdexcept>
#include "Student.h"

void Student::assign(string name, int points) {
    if(this->assignments.count(name) == 0){
        this->assignments[name].first = points;
        this->assignments[name].second = -1;
    }else{
        throw std::invalid_argument("This assignment already exists.");
    }
}

void Student::setGrade(string name, int score) {
    if(this->assignments.count(name) != 0){
        this->assignments[name].second = score;
    }else{
        throw std::invalid_argument("This assignment does not exist.");
    }
}

map<string, pair<int, int>> Student::getAssignments() {
    return this->assignments;
}

string Student::getId() {
    return this->id;
}

const string &Student::getFName() const {
    return fName;
}

const string &Student::getLName() const {
    return lName;
}

Student::Student(const string &fName, const string &lName, const string &id) : fName(fName), lName(lName), id(id) {}

pair<int, int> Student::getAssignment(string name) {
    for(const auto &pair : this->assignments){
        if(pair.first == name){
            return pair.second;
        }
    }
    return pair<int, int>(-1, -1);
}
