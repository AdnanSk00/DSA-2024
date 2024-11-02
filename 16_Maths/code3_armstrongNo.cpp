// Armstrong Number :

// Armstrong number is a number that is equal to the sum of cubes of its digits.
// Eg n = 371 <===> 3³ + 7³ + 1³ = 371 

#include<iostream>
using namespace std;

bool isArmstrong(int n){    // O(log₁₀n)
    int copyN = n;
    int sumOfCubes = 0;

    while(n != 0){
        int dig = n % 10;
        sumOfCubes += (dig * dig * dig);
        
        n = n / 10;
    }

    return sumOfCubes == copyN;
}

int main(){
    // int n = 153;
    int n = 371;

    if(isArmstrong(n)){
        cout << n << " is an Armstrong number \n";
    } else {
        cout << n << " NOT an Armstrong number \n";
    }

    return 0;
}