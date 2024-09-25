// Linear Search Algorithms :-

#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){   // FOUND
            return i;
        }
    }
    return -1;      // NOT FOUND
}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    int target = 8;
    // int target = 6;

    cout << "At index = " << linearSearch(arr, size, target) << endl;
    

    return 0;
}