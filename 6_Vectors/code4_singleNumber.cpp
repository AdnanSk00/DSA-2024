#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums){
    int ans = 0;
    for(int val : nums){
        ans = ans ^ val;
    }
    return ans;
}

int uniqueNumber(int arr[], int sz){
    int ans = 0;
    for(int i=0; i<sz; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    vector<int> nums = {4, 1, 2, 1, 2};
    // cout << "Unique number = " << singleNumber(nums) << endl;


    int arr[] = {1, 2, 1, 2, 4};
    cout << "Unique Number = " << uniqueNumber(arr, 5) << endl;


    return 0;
}