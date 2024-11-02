// Array Pointer :

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    // cout << arr << endl;    // address of arr[0]
    // cout << *arr << endl;   // pointer => 1

    int a = 17, b = 18;
    int* ptr = &a;
    ptr = &b;
    cout << *ptr << endl;

    int newArr[] = {10, 15, 20};
    int newVar = 56;

    // newArr = &b;    // constant - array pointer newArr[]

    return 0;
}