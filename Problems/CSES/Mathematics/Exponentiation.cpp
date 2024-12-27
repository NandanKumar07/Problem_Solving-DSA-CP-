#include<iostream>
using namespace std;

int modi = 1e9 + 7;

int main() {
    int n;
    cin>>n;

    while(n--) {
        int a,b;
        cin>>a>>b;

        int num = 1;
        while(b > 0) {

            if(b%2 != 0) {
                num = (1LL * a*num)%modi;
            }
            a = (1LL * a*a)%modi;
            b = b/2;
        }
        cout<<(num%modi)<<endl;
    }
}