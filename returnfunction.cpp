#include<iostream>
using namespace std;
void login();

void refunction(){
    cout << "1. Admin" << endl;
   cout << "2. Student User" << endl;


   int choose;
    cin >> choose;
if(choose == 1){
    login();
}else if(choose == 2){
    cout << "Student User Panel" << endl;


 }
}