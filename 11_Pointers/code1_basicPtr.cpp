// ********************      POINTER     *******************

// & - Address of Operator
// * - Dereference Operator (Value at address)

#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    // cout << &a << endl;
    // cout << ptr << endl;
    // cout << &ptr << endl;
    
    float price = 100.25;
    float* fltPtr = &price;
    // cout << fltPtr << endl;
    // cout << &price << endl;
    // cout << &fltPtr << endl;

    int b = 20;
    int* ptr2 = &a;
    int** parPtr = &ptr2;       // Pointer to Pointer
    
    // cout << &ptr2 << endl;
    // cout << parPtr << endl;

    int p = 16;
    int* newPtr = &p;
    int** newPtr2 = &newPtr;

    // cout << *(&p) << endl;
    // cout << *(newPtr) << endl;

    // cout << newPtr << endl;
    // cout << *(newPtr2) << endl;
    // cout << **(newPtr2) << endl;

    // int* nullPtr = NULL;     // NULL Pointer
    int** nullPtr = NULL;
    // cout << nullPtr << endl;


    int x = 5;          // H.W
    int *y = &x;
    int **z = &y;

    cout << *y << endl;
    cout << **z << endl;
    cout << y << endl;
    cout << z << endl;
    cout << *z << endl;
    cout << &z << endl;

    return 0;
}