#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int modi = 1e9 + 7;

int main() {
    long long n;
    cin>>n;

    long long sum = 0;
    for(int i = 1; i <= n; i++) {
        int k = n/i;

        int sum_1 = (k*(k + 1)/2)%modi;

        sum = (sum + (i*sum_1)%modi)%modi;
    }
    
    cout<<sum<<endl;
}