// Vector Function :

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> charVec = {'a', 'b', 'c', 'd'};
    // for(char value : charVec){        // for each loop
    //     cout << value << endl;
    // }
    // cout << "Size = " << charVec.size() << endl;

    vector<int> emptyVec;
    cout << "Size = " << emptyVec.size() << endl;
    emptyVec.push_back(56);
    emptyVec.push_back(14);
    emptyVec.push_back(94);
    emptyVec.push_back(26);
    emptyVec.push_back(07);
    cout << "After puch_back = " << emptyVec.size() << endl;

    emptyVec.pop_back();
    cout << "After pop_back = " << emptyVec.size() << endl;

    cout << "Front = " << emptyVec.front() << endl;
    cout << "Back = " << emptyVec.back() << endl;
    cout << "At[] = " << emptyVec.at(2) << endl;

    for(int i : emptyVec){
        cout << i << endl;
    }

    return 0;
}
// Vector Functions :
// - size()
// - puch_back()
// - pop_back()
// - front()
// - back()
// - at()