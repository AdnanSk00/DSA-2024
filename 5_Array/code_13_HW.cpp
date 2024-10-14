// HOME WORK :

// WAF to calculate sum & product of all numbers in an array.
// WAF to swap max & min number of an array.
// WAF to print all the unique values in an array.
// WAF to print intersection of 2 arrays.

#include<iostream>
using namespace std;

int sumAndProduct(int arr[], int sz){
    int sum = 0, prod = 1;
    for(int i=0; i<sz; i++){
        sum += arr[i];
        prod *= arr[i];
    }
    cout << "Sum = " << sum << endl; 
    cout << "Product = " << prod << endl << endl; 
}
int swapMaxAndMin(int arr[], int sz){
    int smallest = INT8_MAX;
    int largest = INT8_MIN;
    for(int i=0; i<sz; i++){
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }
    cout << "Smallest = " << smallest << endl << "Largest = " << largest << endl;
    swap(smallest, largest);
    cout << "After swaping : " << endl << "Smallest = " << smallest << endl << "Largest = " << largest << endl << endl;
}
int uniqueValues(int arr[], int sz){
    int st=0, end=sz-1, unique = 0;
    for(int st=0; st<sz; st++){
        for(int end=0; end<sz; end++){
            unique = unique ^ arr[st];
        }
    }
    return unique;
}
int intersectionFromArrays(int a[], int b[], int sz_a, int sz_b){
    for(int i=0; i<sz_a; i++){
        for(int j=0; j<sz_b; j++){
            if(a[i]==b[j]){
                cout << b[j] << " " ;
            }
        }
    }
}
int main(){
    int arr[] = {2, 1, 3, 1, 4, 3, 2};
    sumAndProduct(arr, 7);
    swapMaxAndMin(arr, 7);
    cout << "Unique = " << uniqueValues(arr, 7) << endl << endl;

    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {6, 7, 1, 3};
    intersectionFromArrays(a, b, 6, 4);


    


    return 0;
}