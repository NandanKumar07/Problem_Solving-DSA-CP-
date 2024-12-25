#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n; cin>>n;

    if(n == 2) {
        cout<<"YES! The given no. is Prime"<<endl;
        return 0;
    } else if(n < 2) {
        cout<<"The given no. is not prime"<<endl;
        return 0;
    }
    int cnt = 0;
    for(int i = 2; i < sqrt(n); i++) {
        if(n%i == 0) {
            cout<<"The given no. is not prime"<<endl;
            return 0;
        }
    }
    cout<<"YES! The given no. is Prime"<<endl;
    
}