#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int p = (n/2) + 1;
    int q = (n/2);
    cout << p << " " << q << endl;
    for(int i=1; i<=p; i++){
        for(int a=1; a<=i-1; a++){
            cout << "  ";
        }
        for(int b=1; b<=p-i+1; b++){
            cout << "* ";
        }
        for(int c=1; c<=q-i+1; c++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}