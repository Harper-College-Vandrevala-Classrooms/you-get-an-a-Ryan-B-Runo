#include <string>

using namespace std;

#ifndef YOU_GET_AN_A_RYAN_B_RUNO_GRADEBOOK_H
#define YOU_GET_AN_A_RYAN_B_RUNO_GRADEBOOK_H


class Gradebook {
private:

public:
    void addStudent(string fName, string lName, string id);
    void addAssignment();
    void enterGrade();
    string report();
};


#endif //YOU_GET_AN_A_RYAN_B_RUNO_GRADEBOOK_H
