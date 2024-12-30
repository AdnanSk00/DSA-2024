#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=0; i<n; i++){    // outer loop
        char ch = 'A';
        for(int j=0; j<n; j++){    // inner loop
            cout << ch << " ";
            ch = ch + 1;    // char + int = char(int) + int
        }
        cout << endl;
    }
    return 0;
}