// CSES - Two Sets

// Your task is to divide the numbers 1,2,\ldots,n into two sets of equal sum.
// Input
// The only input line contains an integer n.
// Output
// Print "YES", if the division is possible, and "NO" otherwise.
// After this, if the division is possible, print an example of how to create the sets. First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.
// Constraints

// 1 \le n \le 10^6

// Example 1
// Input:
// 7

// Output:
// YES
// 4
// 1 2 4 7
// 3
// 3 5 6
// Example 2
// Input:
// 6

// Output:
// NO

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if ((((1LL) * n * (n + 1)) / 2) % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        long long sum = 0;
        int i = n;
        set<int> st;
        while (sum + i < (((1LL)*(n) * (1LL)*(n + 1)) / 2) / 2)
        {
            sum += i;
            st.insert(i);
            i--;
        }

        st.insert(((1LL)*(n) * (1LL)*(n + 1) / 2) / 2 - sum);
        i = 1;
        set<int> st1;
        while (i < n + 1)
        {
            if (st.find(i) == st.end())
            {
                st1.insert(i);
            }
            i++;
        }

        cout << st.size() << endl;
        for (auto x : st)
        {
            cout << x << " ";
        }
        cout << "\n";

        cout << st1.size() << endl;
        for (auto x : st1)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
}