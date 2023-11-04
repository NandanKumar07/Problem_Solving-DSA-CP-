// CSES - Palindrome Reorder

// Given a string, your task is to reorder its letters in such a way that it becomes a palindrome (i.e., it reads the same forwards and backwards).
// Input
// The only input line has a string of length n consisting of characters A–Z.
// Output
// Print a palindrome consisting of the characters of the original string. You may print any valid solution. If there are no solutions, print "NO SOLUTION".
// Constraints

// 1 \le n \le 10^6

// Example
// Input:
// AAAACACBA

// Output:
// AACABACAA

#include<bits/stdc++.h>
using namespace std;

void solve() {
    string str;
    cin>>str;
    int n = str.length();

    unordered_map<char, int> charCount;

    // Count the frequency of each character
    for (char ch : str) {
        charCount[ch]++;
    }

    // Count characters that appear an odd number of times
    int oddCount = 0;
    string single = "";
    for (auto ch : charCount) {
        if (ch.second % 2 != 0) {
            oddCount++;
            single = ch.first;
            ch.second--;
            
        }
    }

    
    // Verify if a palindrome is possible
    if ((n % 2 == 0 && oddCount > 0) || (n % 2 != 0 && oddCount != 1)) {
        cout << "NO SOLUTION" << endl;
        return;
    }
    
    // Construct a Palindromic String
    
    string rev = "";
    for(auto x: charCount) {
        
        for(int i = 0; i < x.second/2; i++) {
            rev += x.first;
        }
        
    }

    string rev2 = rev;
    reverse(rev.begin(),rev.end());
    string ans = rev2 + single + rev;
    cout<<ans<<endl;
    return ; 
}

int main() {
    solve();
    return 0;
}