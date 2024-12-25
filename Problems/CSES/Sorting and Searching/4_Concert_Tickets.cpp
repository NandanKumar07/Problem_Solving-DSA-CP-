// CSES - Concert Tickets

// There are n concert tickets available, each with a certain price. Then, m customers arrive, one after another.
// Each customer announces the maximum price they are willing to pay for a ticket, and after this, they will get a ticket with the nearest possible price such that it does not exceed the maximum price.
// Input
// The first input line contains integers n and m: the number of tickets and the number of customers.
// The next line contains n integers h_1,h_2,\ldots,h_n: the price of each ticket.
// The last line contains m integers t_1,t_2,\ldots,t_m: the maximum price for each customer in the order they arrive.
// Output
// Print, for each customer, the price that they will pay for their ticket. After this, the ticket cannot be purchased again.
// If a customer cannot get any ticket, print -1.
// Constraints

// 1 \le n, m \le 2 \cdot 10^5
// 1 \le h_i, t_i \le 10^9

// Example
// Input:
// 5 3
// 5 3 7 8 5
// 4 8 3

// Output:
// 3
// 8
// -1

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> price(n);
    vector<int> cust_price(m);

    for(int i = 0; i < n; i++) {
        cin>>price[i];
    }
    for(int i = 0; i < m; i++) {
        cin>>cust_price[i];
    }

    sort(price.begin(), price.end());

    int j = 0, k = 0;
    while(j < n && k < m) {
        if(cust_price[k] >= price[j]) {
            cout<<price[j]<<endl;
            j++;
            k++;
        } else {
            cout<<-1<<endl;
            k++;
        }
    }
    for(int i = k; i < m; i++) {
        cout<<-1<<endl;
    }

}