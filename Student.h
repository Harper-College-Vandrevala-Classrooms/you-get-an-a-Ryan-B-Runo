#include <string>
#include <vector>
#include <map>

using namespace std;

#ifndef YOU_GET_AN_A_RYAN_B_RUNO_STUDENT_H
#define YOU_GET_AN_A_RYAN_B_RUNO_STUDENT_H


class Student {
private:
    string fName, lName, id;
    map<string, pair<int, int>> assignments;
public:
    Student(const string &fName, const string &lName, const string &id);

    void assign(string name, int points);
    void setGrade(string name, int score);
    map<string, pair<int, int>> getAssignments();
    string getId();
    pair<int, int> getAssignment(string name);
    const string &getFName() const;

    const string &getLName() const;

};

#endif //YOU_GET_AN_A_RYAN_B_RUNO_STUDENT_H