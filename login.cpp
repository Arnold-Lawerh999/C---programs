#include <iostream>
using namespace std;

int main(){
    string name = "";
    string index = "";
    string password = "";
    cout << "Welcome To GCTU Student Login Portal" << endl;
    cout <<" <------------------------------------>" << endl;

    cout << "Enter your name" << endl;
    getline(cin,name);
    
    cout << "Input your index number" << endl;
    cin.ignore();
    cin >> index;

    cout << "Input your password" << endl;

    cin >> password;

    cout << "=========================================" << endl;

    cout << "Welcome " << name << " to your Student Portal" << endl;
    
    
    return 0;
}

