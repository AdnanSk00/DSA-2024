// Palindrome Number :
// Eg - 44, 121, 292, 3003, 60906

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

bool isPalindrome(int n) {
    if(n < 0) return false;

    int revNum = reverse(n);
    return n == revNum;
}

int main(){
    int n = 32023;
    if(isPalindrome(n)){
        cout << n << " = Palindrome" << endl;
    } else {
        cout << n << " = NOT Palindrome" << endl;
    }

    return 0;
}