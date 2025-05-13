// Strings in C++ :

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "apna college";    // dynamic - runtime resize & contigous
    // cout << str << endl;

    str = "hello";
    // cout << str << endl;

    char chArr[] = "apna college";
    // chArr[] = "hello";           // Error
    // cout << chArr << endl;


    string str1 = "apna";
    string str2 = "college";

    string str3 = str1 + str2;  // concatenation
    // cout << str3 << endl;

    string a1 = "Sayyed";
    string b1 = "Shaikh";
    cout << (a1!=b1) << endl;
    cout << (a1>b1) << endl;
    cout << a1.length() << endl;

    string forInp ;
    // cout << "Enter the String - ";

    // cin >> forInp;
    // getline(cin, forInp);
    // cout << "O/P : " << forInp << endl;


    string forLoop = "Salahuddin Ayyubi";

    // for(int i=0; i<forLoop.length(); i++){
    //     cout << forLoop[i] << " ";
    // }
    for(char ch : forLoop){
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}