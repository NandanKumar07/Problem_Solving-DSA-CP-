// Knuth-Morris-Pratt Algorithm

#include<bits/stdc++.h>
using namespace std;

vector<int> prefix_function(string s) {
    int n = (int)s.length();
    vector<int>pi(n);
    for(int i = 1; i < s.length(); i++) {
        int j = pi[i-1];
        while(j > 0 && s[i] != s[j]) 
            j = pi[j-1];
        if(s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}

void solve() {
	string s,t;
	cin>>s>>t;
    
    vector<int>pi = prefix_function(t);
    int j = 0;
    int ct = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == t[j]) {
            j++;
        } else if(s[i] != t[j] && i != 0) {
            j = pi[j-1];
        }
        
        if(j == t.length()) {
            ct++;
        }
    }
    cout<<ct<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}