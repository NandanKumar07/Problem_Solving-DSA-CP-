// CSES - Trailing Zeroes

// Your task is to calculate the number of trailing zeros in the factorial n!.
// For example, 20!=2432902008176640000 and it has 4 trailing zeros.
// Input
// The only input line has an integer n.
// Output
// Print the number of trailing zeros in n!.
// Constraints

// 1 \le n \le 10^9

// Example
// Input:
// 20

// Output:
// 4



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    while(n > 0) {
        ans += n/5;
        n = n/5;
    }
    cout<<ans<<endl;
}
