#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_function(string s) {
    int n = s.length();
    vector<int> pi(s.length());
    for (int i = 1; i < n; i++) {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j]) {
            j = pi[j - 1];
        }
        if (s[i] == s[j]) {
            j++;
        }
        pi[i] = j;
    }
    return pi;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.length();
        vector<int> pi = prefix_function(s);
        int smallestPeriod = n - pi[n - 1];
    
        if (n % smallestPeriod == 0 && smallestPeriod < n) {
            cout << smallestPeriod << endl;
        } else {
            cout << n << endl;
        }
        if(t) {
            cout<<endl;
        }
    }
    return 0;
}
