// ********************      STRINGS     *******************

#include<iostream>
using namespace std;

// Character Arrays :-

int main(){
    // char str1[] = {'a', 'b', 'c'};
    // char str2[] = {'a', 'b', 'c', '\0'};
    // int arr[] = {1, 2, 3};
    // char str[] = "college";   // string literals
    // cout << sizeof(str) << endl;
    // cout << str[2] << endl;    // constant pointers
    
    // char lafz[15];

    // cout << "Enter char array : ";
    // cin.getline(lafz, 100, '$');
    // E.g - "Are ha na$re bhay"

    // cin.getline(lafz, 15);
    // cin >> lafz;

    // cout << "Output : " << lafz << endl;
    // for(char ch : lafz){
    //     cout << ch << " ";
    // }
    // cout << endl;

    char shabd[] = "techniqual maths";
    int len = 0;

    for(int i=0; i<shabd[i] != '\0'; i++){
        len++;
    }
    cout << "Length of string : " << len << endl;

    return 0;
} 