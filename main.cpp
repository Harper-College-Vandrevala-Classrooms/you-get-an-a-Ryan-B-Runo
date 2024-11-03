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

    
    return 0;
}