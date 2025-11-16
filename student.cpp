// student.cpp
#include <iostream>
#include <fstream>
using namespace std;

void student() {
    cout << "\n===== Students Information (Admin) =====\n";

    ifstream file("students.txt");

    if (!file) {
        cout << "No student data found.\n";
        return;
    }

    string name, roll, email;
    int age;

    while (file >> roll >> name >> email >> age) {
        cout << "Name: " << name 
             << ", Roll: " << roll 
             << ", Email: " << email
             << ", Age: " << age << endl;
    }

    file.close();
}
