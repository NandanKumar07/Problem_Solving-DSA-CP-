#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) { 
        return false;
    }
    for (int i = 3; i <= sqrt(n); i += 2) { 
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;

    for(int i = 1; i <= n/2; i++) {
        if(n%i == 0 && isPrime(i)) cout<<i<<" ";
    }
    if(isPrime(n)) {
        cout<<n<<endl;
    }
    return 0;
}