// Subarray from an Array :-

#include<iostream>
using namespace std;

int main(){
    int n = 6;
    int arr[n] = {1, 2, 3, 4, 5, 6};

    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            for(int i=start; i<=end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }    
    
    return 0;
}