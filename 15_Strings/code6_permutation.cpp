// Permutation in String :

// Leetcode Problem 567 :-

#include<iostream>
#include<string>
using namespace std;

bool isFreqSame(int freq1[], int freq2[]) {     // O(1)
    for(int i=0; i<26; i++) {
        if(freq1[i] != freq2[i]) {
            return false;
        }
    }

    return true;
}

bool checkInclusion(string s1, string s2) {     // O(n²)
    int freq[26] = {0};

    for(int i=0; i<s1.length(); i++) {
        // int idx = s1[i] - 'a';  // a -> 0, b -> 1
        // freq[idx]++;
        freq[s1[i] - 'a']++;
        cout << freq[i] << " ";
    }

    int windSize = s1.length();

    for(int i=0; i<s2.length(); i++) {
        int windIdx = 0, idx = i;
        int windFreq[26] = {0};
        while(windIdx < windSize && idx < s2.length()) {
            windFreq[s2[idx] - 'a']++;
            windIdx++; idx++;
        }
        cout << endl;
        for(int value : windFreq){
            cout << value << " ";
        }
        if(isFreqSame(freq, windFreq)) {    // found permutation
            return true;
        }
    }

    return false;
}


int main(){
    // string s1 = "ab", s2 = "eidbaooo";
    // string s1 = "ab", s2 = "eidboaoo";
    string s1 = "abc", s2 = "abacdbcaabcbabdca";

    checkInclusion(s1, s2);
    if(checkInclusion)
        cout << endl << s1 << " exists in " << s2 << endl;
    else
        cout << endl << s1 << " doesn't exists in " << s2 << endl;
        


    return 0;
}