// Valid Palindrome :

// Leetcode Problem 145 :-

#include<iostream>
#include<string>
using namespace std;

bool isAlphaNum(char ch) {
    if(ch >= '0' && ch <= '9' ||
        (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
            return true;
    }

    return false;
}

bool isPalindrome(string s) {
    int st = 0, end = s.length()-1;

    while(st < end){
        if(!isAlphaNum(s[st])) {
            st++; continue; 
        }
        if(!isAlphaNum(s[end])) {
            end--; continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }
        
        st++; end--;
    }
    
    return true;
}

int main(){
    // string s = "race a car";     // raceacar
    string s = "A man, a plan, a canal: Panama";
    // string s = "Ac3?e3c&a";      // ac3e3cA
    // string s = " ";
    cout << "Stirng length = " << s.length() << endl;
    if(isPalindrome(s))
        cout << "\"" << s << "\" is palindrom";
    else
        cout << "\"" << s << "\" is not palindrom";

    return 0;
}

// Note : Alphanumeric Character -
        // { A - Z  48 - 57 
        //   a - z  65 - 90
        //   0 - 9  97 - 122 }
        