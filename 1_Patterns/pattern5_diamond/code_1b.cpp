#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    // top
    for(int i=0; i<n; i++){
        // spaces
        for(int s=0; s<=n-i-1; s++){
            cout << "  ";
        }
        cout << "* ";

        if(i!=0){
            // spaces
            for(int s=0; s<2*i-1; s++){
                    cout << "  ";
            }

            cout << "* ";
        }

        cout << endl;
    }

    // bottom
    for(int i=0; i<n-1; i++){ // 0 to n-2
        // spaces
        for(int s=0; s<=i+1; s++){
            cout << "  ";
        }

        cout << "* ";

        if(i != n-2){
            // spaces
            for(int s=0; s<2*(n-i)-5; s++){
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;

    }


    return 0;
}