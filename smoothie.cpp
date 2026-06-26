#include <iostream>
using namespace std;

int main(){

    int choice = 0;
    char customerChoice = 'Y';

    while(choice != 4){

    cout << "Welcome to Jeronnies Smoothie Hub!" << endl;
    cout << "Re-Live every moment with every sip" << endl;
    cout <<"=======Please Place your Order.========" <<endl;

    cout <<"1. Strawberry-Banana Smoothie --> $5.00 " << endl;
    cout <<"2. Mango Madness Smoothie --> $6.00 " << endl;
    cout <<"3. Green Detox Smoothie --> $7.00 " << endl;
    cout <<"4. Exit the Program" << endl;

    cout <<"<---------------------------------------->" << endl;
    cout <<"Please select your choice" << endl;
    
    cin >> choice;

    if(choice == 1){
        cout <<"1. Strawberry-Banana Smoothie --> $5.00 " << endl;
        cout <<"---------------------------------" << endl;
        cout <<"Do you wish to purchase Strawberry-Banana Smoothie" <<endl;
        cout <<"==================================================="<< endl;
        cout << "Y / N" << endl;
       char customerChoice;
       cin >> customerChoice;
        if(customerChoice == 'Y' || customerChoice == 'y'){
            cout << "Would you like to add Extra Protein for $2.00" <<endl;
            cin >> customerChoice;
            if(customerChoice == 'Y' || customerChoice == 'y'){
                cout <<"Thanks for Purchasing Strawberry-Banana Smoothie with Extra Protein for $7.00" << endl;
            }
            else{
                cout <<"Thanks for Purchasing Strawberry-Banana Smoothie for $5.00" << endl;
            }
        }
        else {
            cout << "Perhaps you may prefer other smoothies" << endl;
        }

    }
    else if(choice == 2){
         cout <<"2. Mango Madness Smoothie --> $6.00 " << endl;
        cout <<"---------------------------------" << endl;
        cout <<"Do you wish to purchase Mango Madness Smoothie" <<endl;
         cout <<"==================================================="<< endl;
        cout << "Y / N" << endl;
       cin >> customerChoice;
        if(customerChoice == 'Y' || customerChoice == 'y'){
            cout << "Would you like to add Extra Protein for $2.00" <<endl;
            char customerChoice;
            cin >> customerChoice;
            if(customerChoice == 'Y' || customerChoice == 'y'){ 
                cout <<"Thanks for Purchasing Mango Madness Smoothie with Extra Protein for $8.00" << endl;
            }
            else{
                cout <<"Thanks for Purchasing Mango Madness Smoothie for $6.00" << endl;
            }
        }
        else {
            cout << "Perhaps you may prefer other smoothies" << endl;
        }
    }

    else if(choice == 3){
         cout <<"3. Green Detox Smoothie --> $7.00 " << endl;
        cout <<"---------------------------------" << endl;
        cout <<"Do you wish to purchase Green Detox Smoothie" <<endl;
         cout <<"==================================================="<< endl;
        cout << "Y / N" << endl;
       cin >> customerChoice;
        if(customerChoice == 'Y' || customerChoice == 'y'){
            cout << "Would you like to add Extra Protein for $2.00" <<endl;
            char customerChoice;
            cin >> customerChoice;
            if(customerChoice == 'Y' || customerChoice == 'y'){
                cout <<"Thanks for Purchasing Green Detox Smoothie with Extra Protein for $9.00" << endl;
            }
            else{
                cout <<"Thanks for Purchasing Green Detox Smoothie for $7.00" << endl;
            }
        }
        else {
            cout << "Perhaps you may prefer other smoothies" << endl;
        }
    }

    else if(choice == 4){
        cout <<"Goodbye! Hope you Enjoyed our service , we hope to see you soon." << endl;
    }

  else {
    cout << "Invalid Option, Please Try Again" << endl;
  }



    return 0;
}
}