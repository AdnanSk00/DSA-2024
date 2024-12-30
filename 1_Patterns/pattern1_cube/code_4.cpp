#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    char ch = 'A';
    for(int i=0; i<n; i++){    // outer loop
        for(int j=0; j<n; j++){    // inner loop
            cout << setw(2) << ch;
            ch += 1;
        }
        cout << endl;
    }
    cout << "After pattern : " << ch << endl;
    return 0;
}