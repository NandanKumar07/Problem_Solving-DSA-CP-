// CSES - GRAY CODE

// A Gray code is a list of all 2^n bit strings of length n, where any two successive strings differ in exactly one bit (i.e., their Hamming distance is one).
// Your task is to create a Gray code for a given length n.
// Input
// The only input line has an integer n.
// Output
// Print 2^n lines that describe the Gray code. You can print any valid solution.
// Constraints

// 1 \le n \le 16

// Example
// Input:
// 2

// Output:
// 00
// 01
// 11
// 10


// Finding Gray code¶
// Let's look at the bits of number  
// $n$  and the bits of number  
// $G(n)$ . Notice that  
// $i$ -th bit of  
// $G(n)$  equals 1 only when  
// $i$ -th bit of  
// $n$  equals 1 and  
// $i + 1$ -th bit equals 0 or the other way around ( 
// $i$ -th bit equals 0 and  
// $i + 1$ -th bit equals 1). Thus,  
// $G(n) = n \oplus (n >> 1)$ :

#include<bits/stdc++.h>
using namespace std;
 
vector<string> genGrayCode(int n, string s) {
    if(n == 1) {
        return {"0", "1"};
    }
 
    vector<string> prev = genGrayCode(n-1, s);
    vector<string> result;

    for(const auto &code: prev) {
        result.push_back("0" + code);
    }
    
    for(int i = prev.size()-1; i >= 0; i--) {
        result.push_back("1" + prev[i]);
    }
    return result;
}
 
int main() {
    int n;
    cin>>n;
    string s = "";
    vector<string> ans = genGrayCode(n,s);
    for(int i = 0; i < ans.size(); i++) {
        cout<<ans[i]<<endl;
    }
    return 0;
}