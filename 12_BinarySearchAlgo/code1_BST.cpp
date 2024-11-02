// Binary Search Algorithm :

#include<iostream>
#include<vector>
using namespace std;

 int binarySearch(vector<int> arr, int tar){    // Iterative code
    int st = 0, end = arr.size()-1;

    while(st <= end){       // T.Complexity - O(logn)
        // int mid = (st + end) / 2;
        int mid = st + (end - st) / 2;

        if(tar > arr[mid]){         // 2nd half
            st = mid + 1;           // S.Complexity - O(1)
        }else if(tar < arr[mid]){   // 1st half
            end = mid - 1; 
        }else{     // mid => ans
            return mid;
        }
    }

    return -1;
 }

int main(){
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};     // odd
    int tar1 = 12;

    // cout << "Index = " << binarySearch(arr1, tar1) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};        // even
    int tar2 = 0;

    cout << "Index = " << binarySearch(arr2, tar2) << endl;

    return 0;
}