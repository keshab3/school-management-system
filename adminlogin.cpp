#include<iostream>
using namespace std;

void studentDetails();
void selectUser();

void adminlogin(){
    
    string username;
    string password;

    cout << "Enter Admin Username: ";
    cin >> username;
    cout << "Enter Admin Password: ";
    cin >> password;

    if(username == "admin" && password == "admin"){
        cout << "Login Successful! Welcome Admin." << endl;
           studentDetails();

    }else{
        cout << "\n" << "Invalid Credentials. Access Denied." << endl;
        cout << "Try Again" << endl << "\n"; 
        cout << "Select Admin or Student User" << endl;
        
        selectUser();
    }
}