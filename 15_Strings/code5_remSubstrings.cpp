// Remove All Occurrences of a Substring :

// Leetcode Problem 1910 :-

#include<iostream>
#include<string>
using namespace std;

string removeOccurrences(string s, string part) {

        cout << "Part length - " << part.length() << endl << endl;
    
    while(s.length() > 0 && s.find(part) < s.length()) {
        cout << "Length of String = " << s.length() << " > " << s << endl;
        cout << "Part Index - " << s.find(part) << endl;

        s.erase(s.find(part), part.length());
    }

    return s;
}

int main(){
    // string s = "daabcbaabcbc", part = "abc";        // dab
    string s = "axxxxyyyyb", part = "xy";       // ab
    cout << "Output : " << removeOccurrences(s, part);

    return 0;
}