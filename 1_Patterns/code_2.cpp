#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout << i+1 <<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     char ch = 'A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout << ch <<" ";
//         }
//         ch ++;
//         cout << endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         int num = 1;
//         for(int j=1; j<=i; j++){
//             cout << i-num+1 <<" ";
//             num = num + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int num = 1;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>0; j--){
//             cout << num <<" ";
//             num += 1;
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
        for(int j=1; j<=i; j++){
            cout << char(ch-j+i) <<" ";
        }
        // ch += 1;
        cout << endl;
    }
    return 0;
}