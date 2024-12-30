// Recursive Binary Search :

#include<iostream>
#include<vector>
using namespace std;

//helper function
int binSearch(vector<int>& arr, int tar, int st, int end){  // T.complexity - O(logn)
    if(st <= end){
        int mid = st + (end-st)/2;

        if(arr[mid] == tar) return mid;     // S.complexity - O(logn)
        else if(arr[mid] <= tar){
            return binSearch(arr, tar, mid+1, end);
        } else {
            return binSearch(arr, tar, st, mid-1);
        }
    }

    return -1;
}

int search(vector<int>& arr, int tar){
    return binSearch(arr, tar, 0, arr.size()-1);    
}

int main(){
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int targetValue = 5;
    cout << "Index of " << targetValue <<" = " << search(arr, targetValue) << endl;

    return 0;
}