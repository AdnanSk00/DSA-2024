// Bubble Sort :

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){      // O(n²)
    
    for(int i=0; i<n-1; i++){
        bool isSwap = false;

        for(int j=0; j<n-i-1; j++){
            // if(arr[j] < arr[j+1]){      // descending order
            if(arr[j] > arr[j+1]){      // ascending order
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }

        if(!isSwap){     // array is already sorted
            return;
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n = 7;
    // int arr[] = {4, 1, 5, 2, 3};
    int arr[] = {6, 9, 1, 3, 5, 2, 3};

    bubbleSort(arr, n);
    printArray(arr, n);


    return 0;
}