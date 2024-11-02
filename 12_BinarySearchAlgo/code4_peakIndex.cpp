// Peak Index in Mountain Array :

// Eg :- arr = {0, 3, 8, 9, 5, 2} 
// Peak index => arr[3] = 9 
//                        /\
//                       /  \
//                      /    \
//                     /      

// Leetcode Problem 852 :-

// Using Brute Force - Linear Search O(n)
// Using Binary Search - O(logn)

#include<iostream>
#include<vector>
using namespace std;

int linearPeakIndexInMountainArray(vector<int>& arr){    // T.Complexity - O(n)

    for(int i=1; i<arr.size()-1; i++){
        if(arr[i-1] < arr[i] && arr[i] > arr[i+1] ){
            return i;
        }
    }
    return -1;
}

int binaryPeakIndexInMountainArray(vector<int>& arr) {    // T.Complexity - O(logn)
    int st = 1, end = arr.size()-2;

    while(st <= end) {
        int mid = st + (end - st) / 2;

        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid + 1]) {
            return mid;
        } else if(arr[mid-1] < arr[mid]) {      // right
            st = mid + 1;
        } else {                                // left
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    vector<int> linearArr = {0, 5, 7, 3, 4};
    cout << "Index = " << linearPeakIndexInMountainArray(linearArr) << endl;

    vector<int> binaryArr = {0, 3, 8, 9, 5, 2};
    cout << "Index = " << binaryPeakIndexInMountainArray(binaryArr) << endl;


    return 0;
}