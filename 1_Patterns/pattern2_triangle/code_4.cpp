#include<iostream>
using namespace std;


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        int num = 1;
        for(int j=1; j<=i; j++){
            cout << i-num+1 <<" ";
            num = num + 1;
        }
        cout << endl;
    }
    return 0;
}
