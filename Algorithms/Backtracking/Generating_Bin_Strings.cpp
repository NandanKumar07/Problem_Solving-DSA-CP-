// Algorithm for Generating of all Binary Strings of length k

// Algorithm BinStr(k)
//    Input: An Integer k

//    If k is 0:
//       Output an empty string (the base case).

//    If k is 1:
//       Output "0" and "1" (the base cases for binary strings of length 1).

//    For each binary string s of length k-1:
//       Output s with "0" appended.
//       Output s with "1" appended.


// Code & Implementation:- 


#include<bits/stdc++.h>
using namespace std;

void BinStr(int k, string& s, vector<string>& res) {
    if (k == 0) {
        res.push_back(s);
        return;
    }

    s[k - 1] = '0';
    BinStr(k - 1, s, res);
    
    s[k - 1] = '1';
    BinStr(k - 1, s, res);
}

vector<string> generateBinaryString(int n) {
    vector<string> res;
    string s(n, ' '); // Initialize string of length k with spaces

    BinStr(n, s, res);
    return res;
}


void solve() {
	int n;
	cin>>n;
	vector<string> ans;
	ans = generateBinaryString(n);
	for(int i = 0; i < ans.size(); i++) {
	    cout<<ans[i]<<" ";
	}
	cout<<"\n";
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}

// Running Time of this Algorithm is :- O(n^2);