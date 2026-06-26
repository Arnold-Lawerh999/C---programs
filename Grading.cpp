#include <iostream>
#include <sstream>
using namespace std;

int main(){
    // A system to show the Grading system for students of Gctu //

    int score = 0;
    string userInput;
    cout << "<---- Welcome to the Gctu Grading System Portal ---->" << endl;
    cout <<"======================================================="<< endl;
    cout << "Input Students Score to get the Grade of the Student" << endl;
    
    cin >> userInput;
   stringstream ss(userInput);

if(ss >> score){
    if(score > 100 || score < 0){
        cout << "Invalid Score, Try Again!" << endl;
    }

    else if(score >= 80){
        cout << "Grade A" << endl;
    }
    else if(score >= 75){
        cout << "Grade A-" << endl;
    }
    else if(score >= 70){
        cout << "Grade B+" << endl;
    }
    else if(score >= 65){
        cout << "Grade B" << endl;
    }
    else if(score >= 60){
        cout <<"Grade B-" << endl;
    }
    else if(score >= 55){
        cout << "Grade C+" << endl;
    }
    else if(score >= 50){
        cout << "Grade C" << endl;
    }
    else if(score >= 45){
        cout << "Grade C-" << endl;
    }
    else if(score >= 40){
        cout << "Grade D" << endl;
    }
    else if(score >= 0){
        cout << "Grade F" << endl;
    }
}

else{
    if(userInput == "X" || "x"){
        cout << "Student was Absent" << endl;
    }
    else if(userInput == "Z" || "z"){
        cout << "Student was Disqualified" << endl;
    }
    else if (userInput == "IC" || "ic" || "Ic" || "iC"){
        cout << "Incomplete" << endl;
    }
    else if(userInput == "AD" || "aD" || "ad" || "Ad"){
        cout << "Audit" << endl;
    }
    else if(userInput == "W" || "w"){
        cout << "Withdrawn" << endl;
    }
    else{
        cout << "Invalid Grade Score, Try Again" << endl;
    }


    return 0;
}
}