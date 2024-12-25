#include<iostream>
using namespace std;

bool checkPalin(int n1, int n2) {
    int ans = 0;

    while(n1 > 0) {
        ans = ans * 10 + n1%10;

        n1 = n1/10;
    }

    return ans==n2;
}

int main() {
    int n1, n2; cin>>n1>>n2;

    cout<<checkPalin(n1,n2)<<endl;

}