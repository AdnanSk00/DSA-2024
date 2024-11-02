// Pointer Arithmetic :

// 1) Increment(++) / Decrement(--)
// 2) Add / Subtract Number
// 3) Pointer to Pointer Subtraction (-)
// 3) Pointer to Pointer Comparison (!=, ==,<, <=, >, >=)

// Hexadecimal(16) - 0 1 2 3 4 5 6 7 8 9 a b c d e f 

#include<iostream>
using namespace std;

int main(){
    int a = 50;
    int*p = &a;

    // cout << p << endl;
    // p--;
    // cout << p << endl;  // change in hexadecimal -> +4 bytes
    // p++;
    // cout << p << endl;  // change in hexadecimal -> +4 bytes
    // ++p;
    // cout << p << endl << endl;  // change in hexadecimal -> +4 bytes

    int b = 20;
    int* q = &b;

    // cout << q << endl;
    // q = q + 1 ;     // increment by 1 int = 4 byte
    // cout << q << endl; 
    // q = q + 3 ;     // increment by 3 int = 12 byte
    // cout << q << endl << endl; 

    int arr[] = {1, 2, 3, 4, 5};

    // cout << arr << endl;        // &arr[0]
    // cout << (arr+1) << endl;    // &arr[1]
    // cout << *(arr) << endl;     // arr[0] = 1
    // cout << *(arr+1) << endl;   // arr[1] = 2
    // cout << *(arr+2) << endl;   // arr[2] = 3
    // cout << *(arr+3) << endl;   // arr[3] = 4

    int* ptr2;              // 0x00ff10
    int* ptr1 = ptr2 + 2;   // 0x00ff18

    // cout << ptr1 - ptr2 << endl;    // 2 - no of bytes

    int* newPtr1;
    // int* newPtr2;
    int* newPtr2 = newPtr1;

    cout << newPtr1 << endl;
    cout << newPtr2 << endl;

    cout << (newPtr1 >= newPtr2) << endl;   // 1

    return 0;
}