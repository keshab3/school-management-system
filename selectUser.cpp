#include<iostream>
using namespace std;
void adminlogin();
void studentlogin();


void selectUser(){
    cout << "1. Admin" << endl;
    cout << "2. Student User" << endl;

    int choose;
    cin >> choose;
    // Admin User Login
    if(choose == 1){
        adminlogin();

    // Student User Panel
    }else if(choose == 2){
        studentlogin();
    }else{
        cout << "Invalid Option" << endl;
    }
}