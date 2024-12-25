// CSES - Tower Of Hanoi

// The Tower of Hanoi game consists of three stacks (left, middle and right) and n round disks of different sizes. Initially, the left stack has all the disks, in increasing order of size from top to bottom. 
// The goal is to move all the disks to the right stack using the middle stack. On each move you can move the uppermost disk from a stack to another stack. In addition, it is not allowed to place a larger disk on a smaller disk.
// Your task is to find a solution that minimizes the number of moves.
// Input
// The only input line has an integer n: the number of disks.
// Output
// First print an integer k: the minimum number of moves.
// After this, print k lines that describe the moves. Each line has two integers a and b: you move a disk from stack a to stack b.
// Constraints

// 1 \le n \le 16

// Example
// Input:
// 2

// Output:
// 3
// 1 2
// 1 3
// 2 3

// Intuition: - 
        // Move n-1 disc from A to B using using C.
        // Move a disc from A to C.
        // Move n-1 disc from B to C using A.

#include<bits/stdc++.h>
using namespace std;

void TOH(int n, int a, int b, int c, vector<pair<int,int>>& st) {
    if(n > 0) {
        TOH(n-1, a, c, b, st);
        st.push_back({a,c});
        TOH(n-1, b, a, c, st);
    }
}

int main() {
    int n;
    cin>>n;
    vector<pair<int,int>>st;
    TOH(n,1,2,3,st);
    cout<<st.size()<<endl;
    for(auto x: st) {
        cout<<x.first<<" "<<x.second<<endl;
    }
}
