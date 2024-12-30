// Check if array is sorted :

#include<iostream>
#include<vector>
using namespace std;

// Check if array is sorted
bool isSorted(vector<int> arr, int n){  // S.complexity - O(n)
    if(n == 0 || n == 1){   // T.complexity - O(n)
        return true;
    }

    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}

int main(){
    vector<int> arr = {1, 2, 8, 4, 5};
    cout << isSorted(arr, arr.size()) << endl;

    return 0;
}