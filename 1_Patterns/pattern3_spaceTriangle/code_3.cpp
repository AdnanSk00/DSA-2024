#include<iostream>
using namespace std;


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    char ch = 'A';
    for(int i=1; i<=n; i++){
        // for(int j=1; j<i; j++){
        for(int j=0; j<i-1; j++){
            cout << "  ";
        }
        for(int k=0; k<=n-i; k++){
            cout << ch << " ";
        }
        ch += 1;
        cout << endl;
    }
    return 0;
}