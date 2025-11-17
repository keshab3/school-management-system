#include<iostream>
#include <fstream>
using namespace std;
string name, roll, email;
int age;

void newStudent(){
    cout << "New Student Registration Page" << endl;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Roll No: ";
    cin >> roll;
    cout << "Enter Email: ";
    cin >> email;
    cout << "Enter Age: ";
    cin >> age; 
    ofstream file("students.txt", ios::app);
    file << name << " " << roll << " " << email << " " << age << endl;
    file.close();
    cout << "Student Registered Successfully!" << endl;
}