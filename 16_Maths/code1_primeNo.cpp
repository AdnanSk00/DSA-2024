// Prime Numbers :
// n --> Range - [2 to √n]

// Leetcode Problem 204 :-

#include<iostream>
#include<vector>
using namespace std;

string Prime(int n){
        for(int i=2; i*i<=n; i++){
            if(n % i == 0){
                return "Not prime";
            }
        }
        return "Prime";
}

string isPrime(int N){
    for(int n=2; n<=N; n++){
        bool isPrimeVar = true;    
        for(int i=2; i*i<=n; i++){
            if(n % i == 0){
                isPrimeVar = false;
                break;
                // return "Not prime";
            }
        }
        if(isPrimeVar){
            cout << n << " = Prime" << endl;
        }
    }
}

// Leetcode Problem - Sieve of Eratosthenes
int countPrimes(int n){
    vector<bool> isPrime(n+1, true);
    int count = 0;

    for(int i=2; i<n; i++){
        if(isPrime[i]){
            count++;

            for(int j=i*2; j<n; j=j+i){
                isPrime[j] = false;
            }
        }
    }
    
    return count;
}

int main(){
    
    // Find Prime or Not 
    int no = 47;
    cout << no << " = "<< Prime(no) << endl;
    
    // Find prime no from 0 to N range
    // int N = 12;
    // cout << isPrime(N) << endl << endl;

    // Count total Prime no in range
    int n = 11;
    cout << "Count Prime = " << countPrimes(n) << endl;
    

    return 0;
}