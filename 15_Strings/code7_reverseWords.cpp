// Reverse Words in a String :

// Leetcode Problem 151 :-

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string reverseWords(string s) {     // O(n)
    int n = s.length();
    string ans = "";

    reverse(s.begin(), s.end());

    for(int i=0; i<n; i++) {
        string word = "";
        while(i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }

        reverse(word.begin(), word.end());
        if(word.length() > 0) {
            ans += " " + word;
        }
    }

    // return ans;
    return ans.substr(1);
}


int main(){
    // string s = "the sky is blue";
    // string s = "  hello world  ";
    // string s = "a good   example";
    string s = "the pen";

    cout << "String : \"" << s << "\"" << endl;
    cout << "Reverse String : \"" << reverseWords(s) << "\"";

    return 0;
}