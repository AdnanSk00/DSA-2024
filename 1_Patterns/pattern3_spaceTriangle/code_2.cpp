#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        // for(int j=1; j<=i-1; j++){
        for(int j=1; j<i; j++){
            cout << "  ";
        }
        // for(int k=1; k<=n-i+1; k++){
        for(int k=0; k<=n-i; k++){
            cout << (i) << " ";
        }
        cout << endl;
    }
    return 0;
}