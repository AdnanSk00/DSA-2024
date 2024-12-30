// ********************    RECURSION    *******************

#include<iostream>
using namespace std;

void printNums(int n){    // Print N to 1
    if(n==1){
        cout << "1\n";
        return;
    }
    cout << n << " ";
    printNums(n-1);
    // cout << n << " return"<<endl;
}

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n*factorial(n-1);
}

int sum(int n){     // Sum of N nums
    if(n == 1){
        return 1;
    }
    return n + sum(n-1);
}


int main(){
    // printNums(4);
    // printf("%d",factorial(4)) << endl;
    // cout << factorial(4) << endl;
    cout << sum(5) << endl;

    return 0;
}

