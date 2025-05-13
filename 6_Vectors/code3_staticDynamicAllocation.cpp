// Static & Dynamic Allocation :

#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> vec(18, 0);

    vector<int> vec;
    vec.push_back(0);
    vec.push_back(5);
    vec.push_back(10);
    vec.push_back(25);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    
    cout << "size = " << vec.size() << endl;     
    cout << "capacity = " << vec.capacity() << endl; 

    return 0;
}