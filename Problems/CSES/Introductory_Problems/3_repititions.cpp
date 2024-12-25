// You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
 
// Input
// The only input line contains a string of n
//  characters.
 
// Output
// Print one integer: the length of the longest repetition.
 
// Constraints:- 1≤n≤106
 
// Example
// Input:
// ATTCGGGA
 
// Output:
// 3
 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s1;
    cin >> s1;
    long long int count = 1;
    long long int max = 0;
    if(s1.length() == 1) {
        cout<<1<<endl;
    }
    else {
        for(long long int i = 0; i < s1.length()-1; i++) {
            if(s1[i] == s1[i+1]) {
                count++;
            } else {
                count = 1;
            }
            if(count > max) 
                max = count;
        }
        cout<<max<<endl;
    }
}