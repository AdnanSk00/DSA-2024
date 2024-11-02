// Digits in a number :

#include<iostream>
#include<math.h>
using namespace std;

void printDigits(int n){    // O(log₁₀n)
    int count = 0;
    int sum = 0;

    while(n != 0){
        int digit = n % 10;
        // cout << digit << endl;

        // count++;
        sum += digit;

        n = n / 10;
        // cout << n << endl;
    }

    // cout << "Count = " << count << endl;
    cout << "Sum = " << sum << endl;
}

int main(){
    int n = 7860;

    printDigits(n);

    cout << "Count = " << (int)(log10(n)) + 1;

    return 0;
}