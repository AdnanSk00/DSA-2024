#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    // TOP
    for(int i=1; i<=n; i++){
        for(int s=1; s<=n; s++){
            if(s<=i){
                cout << "* ";
            }
            else{
                cout <<"  "; 
            }
        }
        for(int s=1; s<=n; s++){
            if(s>=n-i+1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    // BOTTOM
    for(int i=1; i<=n; i++){
        for(int s=1; s<=n; s++){
            if(s<=n-i+1){
                cout << "* ";
            }
            else{
                cout <<"  "; 
            }
        }
        for(int s=1; s<=n; s++){
            if(s>=i){
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