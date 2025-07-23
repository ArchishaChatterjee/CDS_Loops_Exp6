// EXPERIMENT 6C : Entering password using loops
// Archisha Chatterjee
// PRN : 24070123021


#include <iostream>
#include <string>
using namespace std;

int main() {
    string passwd = "hi";
    string entry;
    int i = 0;
    cout << "---ACCOUNT SIGN IN---" << endl;
    while (i<3){
        cout << "Enter password : ";
        cin >> entry;
        if (passwd == entry){
            cout << "Correct" << endl;
            cout << "---ACCOUNT VERIFIED---";
            break;
        }
        else{
            cout << "Wrong.\n" << "You have " << 2-i << " chance left. Please enter again" << endl;
            
        }
        i++;
        if (i == 3){
            cout << "You have reached the maximum number of tries." << endl;
            cout << "---ACCOUNT DELETED----";
        }
    }
    

    return 0;
}
