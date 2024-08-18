/*
    Homework Easy [2] : Problem #2: Student Grades.
    - Code By: Hesham Z. Alsaqqaf

    - Reads in the information for 2 students.
        - For each student read: their name, id and grade.
        - The name and id are BOTH strings, and neither string contains spaces.
    - Print out the information for each student.
    - Print the average grade.
*/
#include <iostream>
using namespace std;
int main()
{
    string name_student1, name_student2;
    string id_student1, id_student2;
    double grade_student1, grade_student2;

    // Information Student Number 1
    cout << "What is student 1 Name : ";
    cin >> name_student1;
    cout << "What is student 1 ID : ";
    cin >> id_student1;
    cout << "What is student 1 Grade Math : ";
    cin >> grade_student1;

    // Information Student Number 2
    cout << "What is student 2 Name : ";
    cin >> name_student2;
    cout << "What is student 2 ID : ";
    cin >> id_student2;
    cout << "What is student 2 Grade Math : ";
    cin >> grade_student2;

    cout << "\t\nThe Result All Program :\n\n";

    // Printing All Information From All Students && Average Grade Math
    cout << "Student Grade In Math : \n";
    cout << name_student1 << " (With id " << id_student1 << ")"
         << " Got Grade : " << grade_student1 << "\n";
    cout << name_student2 << " (With id " << id_student2 << ")"
         << " Got Grade : " << grade_student2 << "\n";
    cout << "Average Grade Is = " << (grade_student1 + grade_student2) / 2.0 << "\n\n";

    cout << "\t\t\"Good bye guys By Hesham\"\n\n";
    return 0;
}