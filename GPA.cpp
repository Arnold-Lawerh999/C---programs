// A code that takes in a student details and calculates the students GPA.

#include <iostream>
#include <vector>

using namespace std;
int main(){
    string studentName = "";
    string studentID = "";
    int studentAge = 0;
    double studentGPA = 0.0;

    int choice = 0;
    
    while(choice !=4){
        cout << endl << "=== Student Grading System ===" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Student Details" << endl;
        cout << "3. Input Student Score" << endl;
        cout <<"4. Exit the Program" <<endl;

        cout <<"Enter your choice" <<endl;

        cin >> choice;

        if(choice == 1){
            cout <<"Enter Student Name" << endl;
            cin.ignore();
           getline(cin, studentName);

           cout << "Enter Student Age" << endl;
           cin >> studentAge;

           cout << "Enter Student Index Number" << endl;
           cin >> studentID;
           cin.ignore();
           studentGPA = 0.0;

           cout << "Student Information saved succesfully!" << endl;

        }
        else if(choice == 2){
            if(studentName == ""){
                cout <<"No Details of the Student is recorded" << endl;
            }else{
                cout << endl << "=== Student Details ===" << endl;
                cout << "Student Name : " <<studentName << endl;
                cout << "Index Number : " << studentID << endl;
                cout << "Student Age : " << studentAge << endl;
                cout << "Student Score : " << studentGPA << endl;
                cout << "------------------------------------------" << endl;
            }

        }
        else if(choice == 3){
            if(studentName == ""){
                cout << "Input Student Name first" << endl;
            }else{
                cout << "Enter student's score : " << endl;
                cin >> studentGPA;
                cout << "Students Score saved!" << endl;
            }
        }
        else if(choice == 4){
            cout << "Exiting the Program, Have a nice day!" << endl;
        }
        else{
            cout << "Invalid Option, Try Again!" << endl;
        }

        
    }


    return 0;
}