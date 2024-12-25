// CSES - Dice Combinations

// Your task is to count the number of ways to construct sum n by throwing a dice one or more times. Each throw produces an outcome between 1 and  6.
// For example, if n=3, there are 4 ways:

// 1+1+1
// 1+2
// 2+1
// 3

// Input
// The only input line has an integer n.
// Output
// Print the number of ways modulo 10^9+7.
// Constraints

// 1 \le n \le 10^6

// Example
// Input:
// 3

// Output:
// 4

#include<bits/stdc++.h>
using namespace std;


int ways(int ct, vector<int>&dp) {
    if(ct == 0) {
        return 1;
    } 
    else if(ct < 0) {
        return 0;
    }

    if(dp[ct] != -1) {
        return dp[ct];
    }
    long long int result = 0;  
    for(int i = 1; i <= 6; i++) {
        result = (result + ways(ct - i, dp)) % 1000000007;
    }

    dp[ct] = result;
    return dp[ct];
}

int main() {
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    dp[0] = 1;
    int ct = n;
    cout<<ways(ct, dp)<<endl;
}