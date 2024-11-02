// Selection Sort :

#include<iostream>
#include<algorithm>
using namespace std;

void selectionSort(int arr[], int n){      // O(n²)

    for(int i=0; i<n; i++){
        int smallestIdx = i;    // unsorted pasrt starting
        for(int j=i+1; j<n; j++){
            // if(arr[j] > arr[smallestIdx]){      // descending order
            if(arr[j] < arr[smallestIdx]){      // ascending order
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
        // cout << arr[i] << " " << arr[smallestIdx] << endl;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n = 9;
    int arr[] = {29, 72, 98, 13, 87, 66, 52, 51, 36};

    selectionSort(arr, n);
    printArray(arr, n);


    return 0;
}