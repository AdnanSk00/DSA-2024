// **************    Bitwise Operator   **************

// Operator Precedence :
// Scope of variables :

#include<iostream>
using namespace std;

void fun(){
    int f = 20;
}

int glo = 56;       // global scope
void gloAccess(){
    cout << glo << endl;
}

int main(){
    cout << 5 - 2 * 6 << endl;
    cout << (5 - 2) * 6 << endl;

    cout << (4 * 5 % 2) << endl;  // Same presedence (Associativity L to R -->)
    cout << (4 % 5 * 2) << endl;  // Same presedence (Associativity L to R -->)

    if(3 > 1){      // local scope
        int x = 10;
    }
    // cout << x << endl;

    for (int i=0; i<1; i++){
        //1st
        for(int j=0; j<1; j++){}
        //2nd
        for(int j=0; j<1; j++){}
    }
    // cout << i << endl;

    // cout << f << endl;

    gloAccess();
    cout << glo << endl;
    return 0;
}