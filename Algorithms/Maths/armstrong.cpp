#include<iostream>
#include<math.h>
using namespace std;

int countDigits(int n) {
    int cnt = 0;

    while(n > 0) {
        cnt++;
        n = n/10;
    }
    return cnt;
}

int main() {
    int n;
    cin>>n;

    int check_n = n;
    int ans = 0;

    int cnt = countDigits(n);

    while(n > 0) {
        int rem = n%10;
        ans += pow(rem,cnt);

        n = n/10;
    }
    (ans == check_n)?(cout<<"YES"<<endl):(cout<<"NO"<<endl);
}