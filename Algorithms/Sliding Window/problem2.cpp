// FIRST NEGATIVE INTEGER IN EVERY WINDOW OF SIZE K

#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> nums, int n, int k)
{
    int i = 0, j = 0;
    vector<int> ans;
    deque<int> dq;

    while (j < nums.size())
    {
        if (nums[j] < 0)
        {
            dq.push_back(j);
        }

        if (j - i + 1 == k)
        {
            if (!dq.empty() && dq.front() >= i)
            {
                ans.push_back(nums[dq.front()]);
            }
            else
            {
                ans.push_back(0);
            }

            if (!dq.empty() && dq.front() == i)
            {
                dq.pop_front();
            }
            i++;
        }

        j++;
    }
    return ans;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> ans = solution(nums, n, k);

    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}