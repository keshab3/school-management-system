#include<iostream>
using namespace std;
void studentDetails();
void studentlogin();
void newStudent();

void studentlogin(){
    cout << "Student Details Page" << endl;
    cout << "1. Exsiting User Account" << endl;
    cout << "2. New Student Registration" << endl;
    cout << "Select Option 1 or 2: ";


 int choose;
    cin >> choose;
    cout << "\n";


// exsiting user login
if(choose == 1){
        string username;
    string password;

    cout << "Type Your Student Credentials" << endl;
    cout << "Enter Student Username: ";
    cin >> username;
    cout << "Enter Student Password: ";
    cin >> password;

    if(username == "student" && password == "student"){
        cout << "Login Successful! Welcome Student." << endl;
           cout << "Student User Details page" << endl;   // Placeholder for student details page

    }else{
        cout << "\n" << "Invalid Credentials. Access Denied. " << endl;
        cout << "Try Again " << endl << "\n";
        studentlogin();
    }

    // New Student Registration
    }else if(choose == 2){
        cout << "Student registration page" << endl;
        newStudent();

    }else{
        cout << "Invalid Option" << endl;
        cout << "Select Option 1 or 2" << endl;
        studentlogin();
        
    }



    
}


