#include <iostream>
#include "Gradebook.h"

using namespace std;

int main(){

    Gradebook gradebook;

    gradebook.addStudent("Bob", "Bobberson", "ABC1");
    gradebook.addStudent("Sam", "Sammerson", "DEF2");
    gradebook.addStudent("Jess", "Jesserson", "GHI3");

    for(Student s : gradebook.getStudents()){
        cout << s.getLName() << ", " << s.getFName() << ": " << s.getId() << endl;
    }

    gradebook.addAssignment("Quiz 1", 100);
    gradebook.addAssignment("Lab 1", 50);

    for(Student s : gradebook.getStudents()){
        cout << s.getLName() << ", " << s.getFName() << ":" << endl;
        for(const auto &pair : s.getAssignments()){
            cout << "\t" << pair.first << ": " << pair.second.second << "/" << pair.second.first << endl;
        }
    }

    gradebook.enterGrade("Sam Sammerson", "Quiz 1", 95);
    gradebook.enterGrade("Bob Bobberson", "Quiz 1", 85);
    gradebook.enterGrade("Jess Jesserson", "Lab 1", 49);
    gradebook.enterGrade("Jess Jesserson", "Quiz 1", 93);
    gradebook.enterGrade("Bob Bobberson", "Lab 1", 0);

    cout << "--------------------------" << endl;

    for(Student s : gradebook.getStudents()){
        cout << s.getLName() << ", " << s.getFName() << ":" << endl;
        for(const auto &pair : s.getAssignments()){
            cout << "\t" << pair.first << ": " << pair.second.second << "/" << pair.second.first << endl;
        }
    }

    return 0;
}