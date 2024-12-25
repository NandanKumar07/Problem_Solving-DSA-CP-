// RETURN THE SUBARRAY OF SIZE K WITH MAXIMUM SUM 

#include<bits/stdc++.h>
using namespace std;

int solution(vector<int>arr, int n, int k) {
    int i = 0, j = 0;
    int maxi = INT_MIN;
    int sum = 0;

    while(j < n) {
        sum += arr[j];

        if(j - i + 1 > k) {
            sum -= arr[i];
            i++;
        }

        if(j - i + 1 == k) {
            maxi = max(sum , maxi);
        }
        j++;
    }
    return maxi;
}

void solve() {
    int n,k; 
    cin>>n>>k;
    vector<int>arr(n);

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    cout<<solution(arr, n, k)<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}