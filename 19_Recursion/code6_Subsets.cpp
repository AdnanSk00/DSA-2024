// Subsets :

// Leetcode Problem 78 :-

#include<iostream>
#include<vector>
using namespace std;

void getAllSubsets(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &allSubsets){     // T.complexity - O(n * 2^n)
    if(i == nums.size()){
        // store subsets:-
        allSubsets.push_back({ans});
        return;
    }

    // include -
    ans.push_back(nums[i]);
    getAllSubsets(nums, ans, i+1, allSubsets);

    ans.pop_back();

    // exclude -
    getAllSubsets(nums, ans, i+1, allSubsets);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> allSubsets;
    vector<int> ans;
    
    getAllSubsets(nums, ans, 0, allSubsets);

    return allSubsets;
}


int main(){
    vector<int> nums = {1, 2, 3};
    // subsets(nums);
    vector<vector<int>> result = subsets(nums);
    for(int val : nums){
        cout << val << " ";
    }

    return 0;
}