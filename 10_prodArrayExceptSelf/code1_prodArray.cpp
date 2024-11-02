// Product of Array Except Self :
// Eg :-  nums = [1, 2, 3, 4]  ans = [24, 12, 8, 6]

// Leetcode Problem 238 :-

// Using Brute Force :-
// Using Optimal Approach :-

#include<iostream>
#include<vector>
using namespace std;

// vector<int> productExceptSelf(vector<int>& nums) {      // Brute Force T.complexity - O(n2)
//     int n = nums.size();
//     vector<int> ans(n, 1);

//     for(int i=0; i<n; i++){
//         // int prod = 1;
//         for(int j=0; j<n; j++){
//             if(i != j){
//                 // prod *= nums[j];
//                 ans[i] *= nums[j];
//             }
//         }
//         // ans[i] = prod;
//     }

//     return ans;
// }

vector<int> productExceptSelf(vector<int>& nums) {      // 2 pointer approach T.complexity - O(n)
    int n = nums.size();
    vector<int> ans(n, 1);
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    //prefix
    for(int i=1; i<n; i++){      // Space complexity - O(n)
        prefix[i] = prefix[i-1] * nums[i-1];
    }
    //suffix
    for(int j=n-2; j>=0; j--){      // Space complexity - O(n)
        suffix[j] = suffix[j+1] * nums[j+1];
    }
    for(int k=0; k<n; k++){
        ans[k] = prefix[k] * suffix[k];
    }

    return ans;
}


int main(){
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = productExceptSelf(nums);
    // cout << ans[0] << endl;
    for (int value : ans){
        cout << value << " ";
    }

    return 0;
}