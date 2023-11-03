// 1364A - XXXXX - 1200(Rated)

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,x;
    long long sum = 0;
    cin>>n>>x;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        sum += v[i];
    } 
    if(sum%x != 0) {
        cout<<n<<endl;
        return ;
    }
    int maxi = INT_MIN;
    long long int sum1 = sum;
    int i = 0, j = n-1;
    while(i < j) {
        sum -= v[j];
        if(sum%x != 0) {
            maxi = max(maxi,j - i);
        }
        j--;
    }
    sum = sum1;
    i = 0;
    j = n-1;
    while(i < j) {
        sum -= v[i];
        if(sum%x != 0) {
            maxi = max(maxi,j - i);
        }
        i++;
    }
    if(maxi != INT_MIN) {
        cout<<maxi<<endl;
    } else {
        cout<<-1<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}