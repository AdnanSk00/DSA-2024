#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        // space : p-i
        for(int s=1; s<=n-i; s++){
            cout << "  ";
        }
        // nums1 : i
        for(int v1=1; v1<=i; v1++){
            cout << v1 << " ";
        }
        // nums2 : i-1
        for(int v2=1; v2<i; v2++){
            cout << (i-v2) <<" ";
        }
        cout << endl;
    }
    return 0;
}