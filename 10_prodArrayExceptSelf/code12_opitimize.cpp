// Using Optimize method :-

#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {      // Time complexity - O(n)
    int n = nums.size();
    vector<int> ans(n, 1);

    //prefix => ans
    for(int i=1; i<n; i++){
        ans[i] = ans[i-1] * nums[i-1];
    }
    int suffix = 1;      // Space Complexity - O(1)
    //suffix => ans
    for(int j=n-2; j>=0; j--){
        suffix *= nums[j+1];
        ans[j] *= suffix; 
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