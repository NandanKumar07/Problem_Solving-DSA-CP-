// Link --> [https://codeforces.com/gym/302977/problem/A]

// Solution:-> 

#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    int f[n+1];
    f[0] = 1;
    f[1] = 0;
    for(int i = 2; i <= n; i++) {
        f[i] = 2*f[i-2];
    }
    cout<<f[n]<<endl;
}
 
int main() {
    solve();
}