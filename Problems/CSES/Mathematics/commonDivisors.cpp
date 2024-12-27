// STUDY HARMONIC SERIES 


#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

typedef vector<int> v;

int main() {
    int n;
    cin>>n;

    v range(1e6 + 1, 0);

    for(int i = 0; i < n; i++) {
        int a; cin>>a;
        range[a]++;
    }

    for(int gcd = 1e6; gcd >= 1; gcd--) {
        int multiple = 0;
        for(int i = gcd; i <= 1e6; i += gcd) {
            multiple += range[i];
        }
        if(multiple > 1) {
            cout<<gcd<<endl;
            return 0;
        }
    }

}