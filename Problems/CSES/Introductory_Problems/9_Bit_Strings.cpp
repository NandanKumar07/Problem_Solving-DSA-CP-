// CSES - Bit Strings

// Your task is to calculate the number of bit strings of length n.
// For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.
// Input
// The only input line has an integer n.
// Output
// Print the result modulo 10^9+7.
// Constraints

// 1 \le n \le 10^6

// Example
// Input:
// 3

// Output:
// 8

#include <bits/stdc++.h>
using namespace std;

long long int power(long long int x, int n)
{
    long long int res = 1;
    while (n > 0)
    {
        res = res%1000000007;

        if (n % 2 == 1)
        {
            res = (res * x)%1000000007;
            n--;
        }
        x = (x * x)%1000000007;
        n = n / 2;
    }
    return res%1000000007;
}

int main()
{
    int n;
    cin >> n;
    cout << power(2, n) << endl;
    return 0;
}