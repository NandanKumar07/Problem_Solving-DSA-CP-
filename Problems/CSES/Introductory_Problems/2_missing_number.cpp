// CSES Problem:- Missing Number
// You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.
 
// Input
// The first input line contains an integer n.
// The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).
 
// Output
// Print the missing number.
 
// Constraints
// 2≤n≤2⋅105
 
// Example
// Input:
// 5
// 2 3 1 5
 
// Output:
// 4
 
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long int n;
    cin>>n;
    long long int sum = 0;
    vector<long long int> v(n-1);
    for(long long int i = 0; i < n-1; i++) {
        cin>>v[i];
    }
    for(long long int i = 0; i < n-1; i++) {
        sum += v[i];
    }
    int num = n*(n+1)/2 - sum;
    cout<<num<<endl;
}