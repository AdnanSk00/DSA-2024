#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         for(int s=1; s<=n; s++){
//             if(n-s<i){
//                 cout << "* ";
//             }
//             else{
//                 cout <<"  "; 
//             }
//         }
//         for(int s=1; s<n; s++){
//             if(s<i){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     for(int i=1; i<n; i++){
//         for(int s=1; s<=n; s++){
//             if(s>i){
//                 cout << "* ";
//             }
//             else{
//                 cout <<"  "; 
//             }
//         }
//         for(int s=1; s<n; s++){
//             if(n-i-1>=s){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }


int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    // top
    for(int i=1; i<=n; i++){
        // spaces
        for(int s=1; s<=n-i; s++){
            cout << "  ";
        }
        // stars
        for(int s=1; s<=2*i-1; s++){
                cout << "* ";
        }
        cout << endl;
    }

    // bottom
    for(int i=1; i<n; i++){ // 0 to n-2
        // spaces
        for(int s=1; s<=i; s++){
            cout << "  ";
        }
        // spaces
        for(int s=0; s<2*(n-i)-1; s++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}