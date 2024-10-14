// Important !

#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> vec;    // { }
    // vector<int> vec = {1, 2, 3};
    vector<int> vec(5, 0);  // vec[5] = {0, 0, 0, 0, 0}
    // cout << vec[0] << endl;
    // cout << vec.at(0) << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // cout << vec[3] << endl;
    // cout << vec[4] << endl;

    // for(int i : vec){        // for each loop
    //     cout << i << endl;
    // }

    vector<char> charVec = {'a', 'b', 'c', 'd', 'e'};
    for(char val : charVec){
        cout << val << endl;
    }


    return 0;
}