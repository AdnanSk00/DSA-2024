// Book Allocation or Allocate Books Problem :

// Leetcode Problem  :-

// Using Binary Search - O(logn)

#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){  // O(n)
    int students = 1, pages = 0;

    for(int i=0; i<n; i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }

        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
            cout <<"|" << pages << "|";
        } else {
            students++;
            pages = arr[i];
            cout << "<" << pages <<">";
        }
    }
    cout << endl;
    return students > m ? false : true;
}

int allocateBooks(vector<int> &arr, int n, int m){    // O(logN * n)
    if(m > n) { 
        return -1;
    }

    int sum = 0;
    for(int i=0; i<n; i++){ // O(n)
        sum += arr[i];
    }

    int ans = -1;
    int st = 0, end = sum; // range of possible ans

    while(st <= end){
        int mid = st + (end - st) / 2;
        cout << mid << endl;
        if(isValid(arr, n, m, mid)){    // left
            ans = mid;
            end = mid - 1;
        } else {                        // right
            st = mid + 1;
        }
    }

    return ans;
}

int main(){
    // vector<int> arr = {2, 1,  3, 4};       // 6
    // vector<int> arr = {15, 17, 20};     // 32
    vector<int> arr = {12,30, 4, 8, 6};     // 42
    int n = 5, m = 2;

    cout << "Answer = " << allocateBooks(arr, n, m) << endl;

    return 0;
} 