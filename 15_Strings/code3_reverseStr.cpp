// Reverse a String :

// Leetcode Problem 344 :-

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverseString(vector<char>& s){    // Character Array
    int st = 0,  end = s.size()-1;

    while(st < end){
        swap(s[st++], s[end--]);
    }
    for(char ch : s){
        cout << ch << " ";
    } 
    cout << endl;
}

int main(){
    // For character Array :-
    vector<char> strOfChar = {'p', 'a', 't', 'i', 'e', 'n', 'c', 'e'};
    for(char ch : strOfChar){
        cout << ch << " ";
    }
    cout << endl;
    reverseString(strOfChar);


    // For String :-
    string str2 = "Team SRK";
    cout << str2 << endl;
    reverse(str2.begin(), str2.end());
    cout << str2 << endl;


    return 0;
}

// H.W - Find if a string is Palindrome or Not?
// 1) racer
// 2) madam
// 3) dad, mom
// 4) level
// 5) peep