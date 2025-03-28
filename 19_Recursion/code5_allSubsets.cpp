// Print all Subsets :

#include<iostream>
#include<vector>
using namespace std;

void printSubsets(vector<int> &arr, vector<int> &ans, int i){       // T.complexiy - O(2^n * n)
    if(i == arr.size()){
        for(int val : ans){
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // include -
    ans.push_back(arr[i]);
    printSubsets(arr, ans, i+1);

    ans.pop_back();     // backtrack
    // exclude -
    printSubsets(arr, ans, i+1);
}

int main(){
    vector<int> arr = {1, 2, 3};
    vector<int> ans;    // store subsets

    printSubsets(arr, ans, 0);

    return 0;
}