// O(n²)
// Selection Sort :-

#include<iostream>
using namespace std;

int main(){            // T.complexity - O(n²)
    int n = 9;
    int arr[] = {29, 72, 98, 13, 87, 66, 52, 51, 36};

    for(int i=0; i<n; i++){
        int minIdx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
        cout << arr[i] << " " << arr[minIdx] << endl;
    }
    cout << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " " ;
    }

    return 0;
}