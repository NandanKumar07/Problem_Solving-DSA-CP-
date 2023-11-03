// CSES Problem:- Increasing Array
 
// You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.
// On each move, you may increase the value of any element by one. What is the minimum number of moves required?
 
// Input
// The first input line contains an integer n: the size of the array.
// Then, the second line contains n integers x1,x2,…,xn : the contents of the array.
 
// Output
// Print the minimum number of moves.
 
// Constraints = 1≤n≤2⋅105   1≤xi≤109
 
// Example
// Input:
// 5
// 3 2 5 1 7
 
// Output:
// 5
 
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long int n;
    cin>>n;
    vector<long long int> x(n);
    for(long long int i = 0;  i < n; i++) {
        cin>>x[i];
    }
 
    long long int count = 0;
    for(long long int i = 0; i < x.size()-1; i++) {
        if(x[i] > x[i+1]) {
            count += (x[i] - x[i+1]);
            x[i+1] = x[i];
        }
    }
    cout<<count<<endl;
}