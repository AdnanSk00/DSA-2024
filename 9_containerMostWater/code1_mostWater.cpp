// Container with Most Water :

// Leetcode Problem 11 :-

// Using Brute Force :-
// Using Optimal Approach (2 pointer):-

#include <iostream>
#include <vector>
using namespace std;

// int maxArea(vector<int> &height){      // Brute Force T.complexity - O(n2)
//     int maxWater = 0;       // ans
//     for (int left = 0; left < height.size(); left++){
//         for (int right = left + 1; right < height.size(); right++){
//             int weight = right - left;
//             int ht = min(height[left], height[right]);
//             int currentWater = ht * weight;

//             maxWater = max(maxWater, currentWater);
//         }
//     }
//     return maxWater;
// }

int maxArea(vector<int> &height){      // 2 pointer approach T.complexity - O(n)
    int maxWater = 0;       // ans
    int lp = 0, rp = height.size()-1;
    while (lp<rp){
        int wt = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currentWater = ht * wt;
        maxWater = max(maxWater, currentWater);

        height[lp] < height[rp] ? lp++ : rp--;
    }
    
    return maxWater;
}


int main(){
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Container with Most Water = " << maxArea(height);

    return 0;
}