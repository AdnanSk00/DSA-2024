// GCD - Greatest Common Devicer :
// HCF - Highest Common Factor :

// Eg a = 20, b= 28 ==> 4 is highest value to divide both no

// LCM - Lowest Common Multiple :
// LCM - Least Common Multiple :

// a * b = GCD(a, b) * LCM(a, b)
// Formula :- LCM(a, b) = (a * b) / GCD(a, b)

#include<iostream>
using namespace std;

int gcd(int a, int b){     // O(min(a,b))
    int gcd = 0;
    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    return gcd;
}

int greatesCommonFactor(int a, int b){
    while(a > 0 && b > 0){
        if(a > b){
            a = a % b;
        } else {
            b = b % a;
        }
    }
    if(a == 0) return b;
    return a;
}

int gcdRecursion(int a, int b){
    if(b == 0) return a;
    
    return gcdRecursion(b, a % b);
}

int lcm(int a, int b){
    int gcd = gcdRecursion(a, b);
    return (a*b) / gcd;
}

int main(){
    int a = 20, b = 28;

    cout << "GCD = " << gcd(a, b) << endl;
    // cout << "GCD = " << greatesCommonFactor(a, b) << endl;
    // cout << "GCD = " << gcdRecursion(a, b) << endl;
    cout << "LCM = " << lcm(a, b) << endl;


    return 0;
}