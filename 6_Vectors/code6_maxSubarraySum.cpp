// Maximum Subarray Sum :

#include<iostream>
using namespace std;

int main(){
    int sz = 7;
    int arr[7] = {3, -4, 4, 5, -1, 7, -8};
    // int sz = 5;
    // int arr[5] = {1, 2, 3, 4, 5};

    int maxSum = INT8_MIN;

    for(int st=0; st<sz; st++){
        int currSum = 0;
        for(int end=st; end<sz; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
            // cout << "max = " << maxSum << " ";
        }
    }
    cout << "Maximum Subarray Sum = " << maxSum << endl;


    return 0;
}