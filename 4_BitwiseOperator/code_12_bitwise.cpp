// **************    Bitwise Operator   **************

#include<iostream>
using namespace std;

int main(){
    int a = 4, b = 8;
    int p = 3, q = 7;

    cout << (a & b) << endl;    // Bitwise AND
    cout << (a | b) << endl;    // Bitwise OR
    cout << (p ^ q) << endl;    // Bitwise XOR

    cout << (a << 1) << endl;   // Bitwise Left shift
    cout << (10 << 2) << endl;
    cout << (b >> 2) << endl;   // Bitwise Right shift
    cout << (10 >> 1) << endl << endl;
    // cout << (50 >> 2) << endl;


    // H.W :
    cout << (6 & 10) << endl;
    cout << (6 | 10) << endl;
    cout << (6 ^ 10) << endl;
    cout << (10 << 2) << endl;
    cout << (10 >> 1) << endl;


    return 0;
}

// NOTE : H.W

// 1. Figure out how to find if a number is power of 2 without any loop.
// 2. WAF to reverse an Integer n.