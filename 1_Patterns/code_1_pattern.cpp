#include<iostream>
#include<iomanip>
using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i=1; i<=n; i++){    // outer loop
//         for(int j=0; j<n; j++){    // inner loop
//             // cout << i << " ";
//             // cout << j << " ";
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
//     for(int i=0; i<n; i++){    // outer loop
//         char ch = 'A';
//         for(int j=0; j<n; j++){    // inner loop
//             cout << ch << " ";
//             ch = ch + 1;    // char + int = char(int) + int
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
//     for(int i=0; i<n; i++){    // outer loop
//         for(int j=0; j<n; j++){    // inner loop
//             cout << setw(4) << num;
//             num += 1;
//         }
//         cout << endl;
//     }
//     cout << "After pattern : " << num << endl;
//     return 0;
// }


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