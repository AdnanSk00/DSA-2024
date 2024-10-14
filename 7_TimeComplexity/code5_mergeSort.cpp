// O(n)
// Merge Sort :-

#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int si, int mid, int ei){     // TC - O(n)
    vector<int> temp;
    int i=si, j=mid+1;

    while(i <= mid && j<=ei){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid){
        temp.push_back(arr[i++]);
    }
    while (j <= ei){
        temp.push_back(arr[j++]);
    }

    //copy back to original
    for(int idx=si, x=0; idx<=ei; idx++){
        arr[idx] = temp[x++];
    }
}

void mergeSort(int arr[], int si, int ei){     // TC - O(nlogn)
    if(si >= ei){
        return ;
    }
    int mid = si + (ei - si)/2;
    mergeSort(arr, si, mid);
    mergeSort(arr, mid+1, ei);
    merge(arr, si, mid, ei);
}


int main(){         // T.complexity - O(n)
    int sz = 8;
    int arr[] = {5, 2, 4, 7, 1, 3, 2, 6};
    mergeSort(arr, 0, 7);

    return 0;
}