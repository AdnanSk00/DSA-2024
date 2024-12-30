#include<iostream>
using namespace std;

// Leetcode Problem 509 :-

int fibonacci(int n){   // T.complexity - O(2^n)/O((1.18)^n)
    if(n==0 or n==1){   // S.complextiy - O(n)
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n = 6;
    int fib = fibonacci(n);    
    cout << "Fibonacci(" << n << ") = " << fib << endl;

    return 0;
}