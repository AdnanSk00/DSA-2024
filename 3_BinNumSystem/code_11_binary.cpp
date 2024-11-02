// **************    Binary Number System   **************

// Decimal to Binary conversion :

#include<iostream>
using namespace std;

int decToBinary(int decNum){
    int ans = 0, pow = 1;
    while (decNum > 0){
        int rem = decNum % 2;
        decNum = decNum / 2;

        ans += (rem * pow);
        pow *= 10;
    }

    return ans;     // binary form
}

// Binary to Decimal conversion :

int binToDecimal(int binNum){
    int ans = 0, pow = 1;
    while(binNum > 0){
        int rem = binNum % 10;
        ans += (rem * pow);

        binNum /= 10;
        pow *= 2;
    }
    return ans;     // decimal form
}

int main(){
    int decNum, binNum;
    
    cout << "Enter Decimal Number = ";
    cin >> decNum;
    cout << "Given Binary Number of " << decNum << " = " << decToBinary(decNum) << endl;
    for (int i=1; i<=10; i++){
        cout <<"Binary (" << i << ") = " << decToBinary(i) << endl;
    }

    cout << "Enter Binary Number = ";
    cin >> binNum;
    cout << "Given Decimal Number = " << binToDecimal(binNum) << endl;


    return 0;
}
