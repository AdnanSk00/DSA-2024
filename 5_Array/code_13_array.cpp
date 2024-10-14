// *************     ARRAY       **************

#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {99, 32, 40, 98, 91};
    marks[0] = 101;
    // cout << marks[0] << endl;
    // cout << sizeof(marks) / sizeof(int) << endl;

    double price[] = {98.99, 105.90, 72.193};
    int size1 = 3;
    // cout << sizeof(price) / sizeof(double) << endl;
    // for(int i=0; i<size1; i++){
    //     cout << price[i] << endl;
    // }

    int vacancy = 4;
    int employee[vacancy];

    // for(int i=0; i<vacancy; i++){
    //     cin >> employee[i];
    // }
    // for(int i=0; i<vacancy; i++){
    //     cout << employee[i] << endl;
    // }

    int nums[] = {5, 15, 22, 1, -15, -24};
    int size2 = 6;

    int smallest = INT8_MAX;
    int largest = INT8_MIN;

    for (int i = 0; i < size2; i++){
        // if(nums[i] < smallest){
        //     smallest = nums[i];
        // }
        smallest = min(nums[i], smallest);
        cout << "Smallest = " << smallest << endl;
        largest = max(nums[i], largest);
        cout << "Largest = " << largest << endl;
    }
    // cout << "Smallest = " << smallest << endl;
    // cout << "Largest = " << largest << endl;

    return 0;
}

// NOTE : H.W
// WAF to calculate sum & product of all numbers in an array.
// WAF to swap max & min number of an array.
// WAF to print all the unique values in an array.
// WAF to print intersection of 2 arrays.