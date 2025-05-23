// Pair Sum :

// Brute approach with nested loop :-

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    // for(int i=0; i<n; i++){          // Nested loop T.complexity - O(n2)
    //     for(int j=i+1; j<n; j++){
    //         if(nums[i] + nums[j] == target){
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //     }
    // }


    int i = 0, j = n-1;     // Array must be sorted
    
    while (i<j){            // Optimize method T.complexity - O(n)
        int pairSum = nums[i] + nums[j];        
        if(pairSum > target){
            j--;
        }
        else if(pairSum < target ){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}



int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 22;

    vector<int> ans = pairSum(nums, target);
    cout << "Index = [" << ans[0] << ", " << ans[1] << ", " << ans[2] << "]" << endl;

    return 0;
}