// Pointer Arithmetic H.W :-

#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;

    cout << *(ptr + 1) << endl;
    cout << *(ptr + 3) << endl;

    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}