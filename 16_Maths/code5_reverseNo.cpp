// Reverse a Number :

// Leetcode Problem 7 :-
 
#include<iostream>
using namespace std;

int reverse(int n) {
    int revNum = 0;

    while(n != 0){
        int dig = n % 10;
        // if(revNum > INT8_MAX / 10 || revNum < INT8_MIN / 10){
        //     return 0;
        // }
        revNum = revNum * 10 + dig;
        n = n / 10;
    }

    return revNum;
}

int main(){
    int num = 4537;

    cout << "Number = " << num << endl;
    cout << "Reverse No = " << reverse(num) << endl;

    return 0;
}

