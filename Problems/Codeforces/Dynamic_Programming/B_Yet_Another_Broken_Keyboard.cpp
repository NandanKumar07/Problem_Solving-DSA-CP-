// Link -->   [https://codeforces.com/gym/302977/problem/B]

// Solution:- 

#include<bits/stdc++.h>
using namespace std;
 
void solve() {
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	unordered_set<char> st;
	
	for(int i = 0; i < k; i++) {
	    char a;
	    cin>>a;
	    st.insert(a);
	}
	
	for(int i = 0; i < n; i++) {
	    if(st.find(s[i]) != st.end()) {
	        s[i] = '1';
	    } else {
	        s[i] = '0';
	    }
	}
	long long int one = 0;
	long long int ans = 0;
	for(int i = 0; i < n; i++) {
	    if(s[i] == '1') {
	        one++;
	        ans += one;
	    } else {
	        one = 0;
	    }
	}
	cout<<ans<<endl;
}
 
int main() {
	solve();
	
}