#include<iostream>
using namespace std;
struct Course
 {
    int courseID;
    string courseName;
    int marks;
};
struct Student
 {
    int studentID;
    string studentName;
    string department;
    string semester;
    Course courses[3];    
};
void setStudentInfo(Student& student)
 {
    cout << "Enter student ID: ";
    cin >> student.studentID;
    cout << "Enter student name: ";
    cin.ignore();   
    getline(cin, student.studentName);    
    cout << "Enter department: ";
    getline(cin, student.department);   
    cout << "Enter semester: ";
    cin >> student.semester;  
    for (int i = 0; i < 3; i++) 
    {
    cout << "Enter course ID for course " << i + 1 << ": ";
        cin >> student.courses[i].courseID; 
        cout << "Enter course name for course " << i + 1 << ": ";
        cin.ignore();   
        getline(cin, student.courses[i].courseName);
         cout << "Enter marks for course " << i + 1 << ": ";
        cin >> student.courses[i].marks;
        cout << endl;
    }
}
void displayStudentInfo(const Student& student)
 {
    cout << "Student ID: " << student.studentID << endl;
    cout << "Student Name: " << student.studentName << endl;
    cout << "Department: " << student.department << endl;
    cout << "Semester: " << student.semester << endl;
    cout << "Courses and Marks: " << endl;
    for (int i = 0; i < 3; i++)
     {
        cout << "   Course ID: " << student.courses[i].courseID << endl;
        cout << "   Course Name: " << student.courses[i].courseName << endl;
        cout << "   Marks: " << student.courses[i].marks << endl;
        cout << endl;
    }
}
int main() 
{
    Student student;
    setStudentInfo(student);   
    cout << endl;
displayStudentInfo(student);
    return 0;
}
