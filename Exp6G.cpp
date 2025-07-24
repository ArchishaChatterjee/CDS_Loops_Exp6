// EXPERIMENT 6G : Inverted Left Side Star Pyramid Pattern
// Archisha Chatterjee
// PRN : 24070123021

#include <iostream>
using namespace std;

int main() {
    int i,j;
    int n= 5;
    
    for (i=0; i<=n ; i++){
        for (j=0 ; j <= n -i ; j++){
            cout << "*";
    }
    cout << endl;
    }

    return 0;
}


/*

OUTPUT :
******
*****
****
***
**
*

*/
