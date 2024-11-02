// Single Element in Sorted Array :

// Leetcode Problem 540 :-

// Using Brute Force - Linear Search O(n)
// Using Binary Search - O(logn)

#include<iostream>
#include<vector>
using namespace std;

int linearSingleNonDuplicate(vector<int>& nums){  // T.Complexity - O(n)

    for(int i=0; i<nums.size(); i++){
        if(nums[i-1] != nums[i] && nums[i] != nums[i+1] ){
            return nums[i];
        }
    }
    return -1;
}

int binarySingleNonDuplicate(vector<int>& nums){  // T.Complexity - O(logn)

    int n = nums.size();
    if(n == 1) return nums[0];

    int st = 0, end = n-1;
    while(st <= end){                             // S.Complexity - O(1)
        int mid = st + (end - st) / 2;

        if(mid == 0 && nums[0] != nums[1]) return nums[mid];
        if(mid == n-1 && nums[n-1] != nums[n-2]) return nums[mid];

        if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1] ) return nums[mid];

        if(mid % 2 == 0){   // even
            if(nums[mid-1] == nums[mid]) {  // left
                end = mid - 1;    
            } else {                        // right
                st = mid + 1;
            }
        } else {            // odd
            if(nums[mid-1] == nums[mid]) {  // right
                st = mid + 1;
            } else {                        // left
                end = mid - 1;
            }
        }
    }

    return -1;
}


int main(){
    vector<int> nums = {3,3,7,7,10,11,11};
    // vector<int> nums = {1,1,2,3,3,4,4,8,8};

    cout << "Index = " << linearSingleNonDuplicate(nums) << endl;

    cout << "Index = " << binarySingleNonDuplicate(nums) << endl;


    return 0;
}
