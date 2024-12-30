#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int s=1; s<=n; s++){
            if(n-s+1==i){
                cout << "* ";
            }
            else{
                cout <<"  "; 
            }
        }
        for(int s=1; s<n; s++){
            if(i-1==s){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    for(int i=1; i<n; i++){
        for(int s=1; s<=n; s++){
            if(s==i+1){
                cout << "* ";
            }
            else{
                cout <<"  "; 
            }
        }
        for(int s=1; s<n; s++){
            if(n-i-1==s){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}