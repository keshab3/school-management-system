#include<iostream>
using namespace std;
void student();

void studentDetails(){
    cout << "1. Check Student Records" << endl;
    cout << "2. View Students Details" << endl;
    int choice;
    cin >> choice;
    if(choice == 1){
    cout << "Student Details" << endl;
        student();
      }else if(choice == 2){
        cout << "View Students Functionality" << endl;
      }else{
        cout << "Invalid Option" << endl;
      }
}