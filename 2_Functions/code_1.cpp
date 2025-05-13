// FUNCTIONS :
#include<iostream>
using namespace std;

// function definition
int printHello(void){
    cout << "hello\n";
    return 56;
}
// Sum of 2 number 
double sum(double a, double b){
    double s = a + b;
    return s;
}
// min of 2 nums
int minOfTwo(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
// Calculate sum of number from 1 to N.
int sumN(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum +=i;
    }
    return sum;
}
// Calculate factorial of a number.
int factorialN(int n){
    if(n==1 || n==0){
        return 1;
    }
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}
// Calculate sum of digits of a number.
int sumOfDigits(int num){
    int digSum = 0;
    while(num>0){
        int lastDig = num % 10;
        num /= 10;
        digSum += lastDig;
    }
    return digSum;
}
// Calculate nCr Binomial Coefficient for n & r.
int nCr(int n, int r){
    int fact_n = factorialN(n);
    int fact_r = factorialN(r);
    int fact_nmr = factorialN(n-r);

    return fact_n / (fact_r * fact_nmr);
}

int main(){
    // function call / invoke
    int val = printHello();
    cout << "val = " << val << endl;
    // cout << printHello() << endl;

    cout << "sum = " << sum(2.9, 4.65) << endl;

    cout << "min = " << minOfTwo(9, 4) << endl; // arguments

    int x = 5, y = 10;
    cout << "The total sum from 1 to " << x << " : " << sumN(x) <<endl;
    // cout << "The total sum from 1 to " << y << " : " << sumN(y) <<endl;

    int f1 = 4, f2 = 5;
    cout << "Factorial of " << f1 << " is : " << factorialN(f1) <<endl;
    // cout << "Factorial of " << f2 << " is : " << factorialN(f2);

    int number ;
    cout << "Enter num = ";
    cin >> number;
    cout << "sum of digit = " << sumOfDigits(number) << endl;

    int n = 6, r =3 ;
    cout << n << "C" << r << " = " << nCr(n, r);

    return 0;
}

// NOTE :- H.W
// 1. WAF to check if a number is prime or not.
// 2. WAF to print all prime numbers from 1 to N.
// 3. WAF to print nth Fibonacci.