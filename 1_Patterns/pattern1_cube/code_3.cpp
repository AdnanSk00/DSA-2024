#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int num = 1;
    for(int i=0; i<n; i++){    // outer loop
        for(int j=0; j<n; j++){    // inner loop
            cout << setw(4) << num;
            num += 1;
        }
        cout << endl;
    }
    cout << "After pattern : " << num << endl;
    return 0;
}