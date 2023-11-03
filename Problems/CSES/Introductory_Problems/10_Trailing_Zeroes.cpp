// CSES - Trailing Zeroes

// Your task is to calculate the number of trailing zeros in the factorial n!.
// For example, 20!=2432902008176640000 and it has 4 trailing zeros.
// Input
// The only input line has an integer n.
// Output
// Print the number of trailing zeros in n!.
// Constraints

// 1 \le n \le 10^9

// Example
// Input:
// 20

// Output:
// 4



#include <bits/stdc++.h>
using namespace std;

int trailing_zeroes(int n) {
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << trailing_zeroes(n) << endl;
}
