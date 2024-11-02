// Kadane's Algorithm :

// Maximum Subarray Sum :-

#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int currSum = 0, maxSum = INT8_MIN;
        
    for(int val : nums){
        currSum += val;
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        } 
    }
    return maxSum;
}


int main(){

    vector<int> nums = {3, -4, 5, 4, -1, 7, -8};
    cout << "Maximum Subarray Sum = " << maxSubArray(nums) << endl;
     
    int sz = 8;
    int arr[8] = {3, -4, 5, 3, 4, -1, 7, -8};

    int currSum = 0;
    int maxSum = INT8_MIN;

    for(int st=0; st<sz; st++){
        // for(int end=0; end<sz; end++){
            currSum += arr[st];
            maxSum = max(currSum, maxSum);
            if(currSum < 0){
                currSum = 0;
            }
        // }
    }
    cout << "Maximum Subarray Sum = " << maxSum << endl;


    return 0;
}