#include<iostream>
using namespace std;

int main() {
    int n; 
    cin>>n;

    int cnt = 0;

    while(n > 0) {
        cnt++;
        n = n/10;
    }
    cout<<cnt<<endl;
}