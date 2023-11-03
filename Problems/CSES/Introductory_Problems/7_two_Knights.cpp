// CSES - Two Knights

// Your task is to count for k=1,2,\ldots,n the number of ways two knights can be placed on a k \times k chessboard so that they do not attack each other.
// Input
// The only input line contains an integer n.
// Output
// Print n integers: the results.
// Constraints

// 1 \le n \le 10000

// Example
// Input:
// 8

// Output:
// 0
// 6
// 28
// 96
// 252
// 550
// 1056
// 1848

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i = 1; i < n+1; i++) {
        long long ans = 0;
        if(i <= 2) {
            ans = ((i*i)*(i*i - 1)/2);
        }
        else if(i > 2) {
            ans =  (((1LL)*i*i)*( (1LL)* i*i - 1)/2) - 2*((1LL)*(i-2)*(i-1) + (1LL)*(i-1)*(i-2));
        }
        cout<<ans<<endl;
    }
    return 0;
}