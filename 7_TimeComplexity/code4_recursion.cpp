// O(n)
// Factorial Time Complexity :-

#include<iostream>
using namespace std;

int factorial(int n){       // T.complexity - O(n)
    if(n == 0){
        return 1;
    }
    return n * factorial( n - 1);
}

// Fibonacci Series Time Complexity :-

int fibonacci(int n){       // T.complexity - O(2^n)
    if(n == 0 || n == 1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){     
    int n = 4;
    cout << "Factorial(" << n << ") = "<< factorial(n) << endl;
    cout << "Fibonacci(" << n << ") = "<< fibonacci(n) << endl;

    return 0;
}