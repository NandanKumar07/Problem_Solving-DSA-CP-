// CSES Problem:- Permutations
 
// A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.
// Given n, construct a beautiful permutation if such a permutation exists.
 
// Input
// The only input line contains an integer n.
 
// Output
// Print a beautiful permutation of integers 1,2,…,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".
 
// Constraints = 1≤n≤106
 
// Example 1
// Input:
// 5
 
// Output:
// 4 2 5 3 1
 
// Example 2
// Input:
// 3
 
// Output:
// NO SOLUTION
 
#include<bits/stdc++.h>
using namespace std;
 
void solve(long long int n) {
    if(n == 1) {
        cout<<1<<endl;
        return;
    }
    if(n <= 3 && n > 1) {
        cout<<"NO SOLUTION"<<endl;
        return ;
    }
    int a = 1;
 
    while(a <= n) {
        if(a%2 == 0) {
            cout<<a<<" ";
        }
        a++;
    }
 
    a = 1;
    while(a <= n) {
        if(a%2 != 0) {
            cout<<a<<" ";
        }
        a++;
    }
}
 
int main() {
    long long int n;
    cin>>n;
    solve(n);
}