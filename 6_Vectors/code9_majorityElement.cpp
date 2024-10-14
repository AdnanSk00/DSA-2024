// Majority Element :

// LeetCode Problem 169 :-

// Using Brute Force :-
// Using Optimize (sorting) :-
// Using Moore's voting algorithm :-

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int majorityElement(vector<int> nums) {      // Brute Force T.complexity - O(n2)
//         int n = nums.size();
//         for(int val : nums){
//             int freq = 0;
//             for(int el : nums){
//                 if(el == val){
//                     freq++;
//                 }
//             }
//             if(freq > n/2){
//                 cout << "Frequency = " << freq << endl;
//                 return val;
//             }
//         }
//         return -1;
//     }

// int majorityElement(vector<int> nums) {      // Optimize (sorting) T.complexity - O(nlogn)
//     int n = nums.size();    
//     sort(nums.begin(), nums.end());     // sort {1, 1, 2, 2, 2}
//     int freq = 1, ans = nums[0];        // freq count
//     for(int i=1; i<n; i++){
//         if(nums[i] == nums[i-1]){
//             freq++;
//         }
//         else{
//             freq = 1;
//             ans = nums[i];
//         }
//         if(freq > n/2){
//             cout << "Frequency = " << freq << endl;
//             return ans;
//         }
//     }
//     return ans;
// }

int majorityElement(vector<int> nums) {      // Moore's voting algorithm T.complexity - O(n)
    int n = nums.size();    
    int freq = 0, ans = 0;
    for(int i=0; i<n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    int count = 0;
    for(int val : nums){
        if(val == ans){
            count++;
        }
    }
    if(count > n/2){
        cout << "Frequency = " << count << endl;
        return ans;
    }
    else {
        return -1;
    }
}

int main(){
    // vector<int> nums = {2, 1, 1, 2, 1};
    // vector<int> nums = {0, 1, 2, 2, 2, 0, 2, 1, 2};
    vector<int> nums = {2, 1, 2, 2, 1};
    // majorityElement(nums) ;
    cout << "Majority Element = " << majorityElement(nums) << endl;


    return 0;
}