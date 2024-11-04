#include <string>
#include <vector>
#include "Student.h"

using namespace std;

#ifndef YOU_GET_AN_A_RYAN_B_RUNO_GRADEBOOK_H
#define YOU_GET_AN_A_RYAN_B_RUNO_GRADEBOOK_H

class Gradebook {
private:
    vector<Student> students;
    vector<string> assignments;
public:
    void addStudent(string fName, string lName, string id);
    void addAssignment(const string& name, int points);
    Student *getStudentByFullName(string name);
    vector<Student> getStudents();
    void enterGrade(string fullName, string assignmentName, int grade);
    string report();
};

#endif //YOU_GET_AN_A_RYAN_B_RUNO_GRADEBOOK_H
