// EXPERIMENT 6D : Reverse a number without functions
// Archisha Chatterjee
// PRN : 24070123021

#include <iostream>
#include <string>
using namespace std;

int main() {
    int num = 123454;
    while (num>0){
        cout << num % 10;
        num = num/10;
    }
    cout << endl;

    return 0;
}
