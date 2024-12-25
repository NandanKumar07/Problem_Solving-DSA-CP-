// CSES Problem:- Number Spiral
 
#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    long long int y,x;
    cin>>y>>x;
    long long int val1 = 0,val2 = 0;
    if(y == 1 && x == 1) {
        cout<<1<<endl;
        return ;
    } else {
        if(y < x) {
            if(x%2 != 0) {
                val1 = x*x - (x-1);
                val2 = val1 + (x-y);
            } else {
                val1 = x*x - (x-1);
                val2 = val1 - (x-y);
            }
        } else if(y > x) {
            if(y%2 != 0) {
                val1 = y*y - (y-1);
                val2 = val1 - (y-x);
            } else {
                val1 = y*y - (y-1);
                val2 = val1 + (y-x);
            }
        } else {
            val2 = x*y - (x-1);
        }
    }
    cout<<val2<<endl;
}
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
