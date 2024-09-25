// Data Type Modifiers :- Change meaning of data types.

// - long
// - short
// - long long
// - signed 
// - unsigned

#include<iostream>
using namespace std;

int main(){
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(long long int) << endl;
    // cout << sizeof(long long) << endl;

    unsigned int x = -10;
    cout << x << endl;

    return 0;
}