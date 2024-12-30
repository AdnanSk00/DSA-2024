// Maximum Subarray Sum :

#include<iostream>
using namespace std;

int main(){
    int sz = 7;
    // int arr[sz] = {15, -14, 4, 2, 1, -3, 4};
    int arr[sz] = {3, -4, 4, 5, -1, 7, -8};
    // int sz = 6;
    // int arr[sz] = {1, 2, 3, 4, 5, 6};

    int maxSum = INT8_MIN;

    int count = 1;      // For counting subarray
    for(int st=0; st<sz; st++){
        int currSum = 0;
        for(int end=st; end<sz; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
            cout << count << ") max = " << maxSum << endl;
            count++;
        }
    }
    cout << "Maximum Subarray Sum = " << maxSum << endl;


    return 0;
}