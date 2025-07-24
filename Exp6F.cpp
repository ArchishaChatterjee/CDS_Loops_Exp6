// EXPERIMENT 6F : Right Sided Star Pyramid Pattern
// Archisha Chatterjee
// PRN : 24070123021

#include <iostream>
using namespace std;

int main() {
    int i,j,k;
    int n= 5;
    
    for (i=0; i<=n ; i++){
        for (j=0 ; j <= n-  i ; j++){
            cout << " ";
        }
        for (k=0; k <= i; k++){
                 cout << "*";
            }
        cout << endl;
    }


    return 0;
}


/* OUTPUT : 
      *
     **
    ***
   ****
  *****
 ******
*/
