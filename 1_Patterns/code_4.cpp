#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         for(int j=0; j<=i; j++){
//             cout << "  ";
//         }
//         for(int k=0; k<=n-i; k++){
//             cout << (i) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    char ch = 'A';
    for(int i=1; i<=n; i++){
        for(int j=0; j<=i; j++){
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