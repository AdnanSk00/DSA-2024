#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=1; i<=n; i++){    // outer loop
        for(int j=0; j<n; j++){    // inner loop
            cout << i << " ";
            // cout << j << " ";
            // cout << "* ";
        }
        cout << endl;
    }
    return 0;
}