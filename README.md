[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/5q8vzIyP)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=16858246&assignment_repo_type=AssignmentRepo)

### `main.cpp` contains a demo for reference.

# Gradebook

The `Gradebook` class is the only class that is directly accessed by the user.

## Methods:

    void addStudent(string fName, string lName, string id);
The `addStudent()` method adds a `Student` to the `Gradebook`.<br />
Only the first and last names and ID are required. A new `Student` object is created automatically.<br /><br />

```
void addAssignment(const string& name, int points);
```
The `addAsignment()` method adds an assignment to every `Student` object stored in the `Gradebook`.
Assignment name and point value are required.
<br /><br />

```
Student *getStudentByFullName(string name);
```
The `getStudentByFullName(string name)` method returns a `Student` object from the specified full name.<br />
Name should be formatted as `"fName lName"`, ex: `"Bob Bobberson"`. This is mostly used by the `Gradebook` class itself.
<br /><br />
```
vector<Student> getStudents();
```
Returns a `Student` vector of all students in the `Gradebook`.
`Student` objects are by value, not reference.
<br /><br />
```
void enterGrade(string fullName, string assignmentName, int grade);
```
Assigns `grade` to assignment with name `assignmentName` to student with name `fullName`.
Ex: `gradebook.enterGrade("Sam Sammerson", "Quiz 1", 95);`
<br /><br />
```
string report();
```
Returns a `string` of a nicely formatted grade table.
Students that have no grade for an assignment receive a grade of `-1`.

# Student

```
void assign(string name, int points);
```
Similar to `void addAssignment(const string& name, int points)` from `Gradebook`, but only assigns to the particular `Student`.
<br /><br />
```
void setGrade(string name, int score);
```
Sets the grade of an assignment.
<br /><br />
```
map<string, pair<int, int>> getAssignments();
```
Returns all the assignments for the `Student`.<br />See `getAsignment` for `map` details.
<br /><br />
```
string getId();
```
Returns the id of the `Student`.
<br /><br />
```
pair<int, int> getAssignment(string name);
```
Returns a `pair` containing the point value (first), and grade(second) of a particular assignment.
<br /><br />
```
const string &getFName() const;
```
Return first name.
<br /><br />
```
const string &getLName() const;
```
Return last name.