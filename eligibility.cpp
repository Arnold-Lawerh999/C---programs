//Checking the eligibility of a person for voting//

#include <iostream>
using namespace std;
int main(){   
    //The data type and the varaible assigned to it.

    int age;   
     //Displays the command input your age

    cout<<"Input your age : "; 
    // Allows the individual to input his or her age

    cin>>age;   

    //Condition that checks if the individual is of the right age to vote.
    
    if(age>=18){  
        cout<<"Thank you for your interest in voting, you are eligible to vote. Vote reponsibly";
    } else{
        cout<<"Sorry for the inconvenience, you are not eligible to vote";
    }    

    return 0;
}