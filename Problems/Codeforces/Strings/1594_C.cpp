// 1594C - Make Them Equal - 1200(Rated)

#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin>>n;
	char c;
	cin>>c;
	string s;
	cin>>s;
	int c1 = 0;
	for(int i = 0; i < n; i++) {
	    if(s[i] != c) {
	        c1++;
	    }
	}
	if(c1 == 0) {
	    cout<<0<<endl;
	    return ;
	}
	
	for(int i=2; i<=n; i++) {
        int c2=0;
        if(s[i-1]==c) {
            for(int j=i; j<=n; j+=i) {
                if(c != s[j-1]) {
                    c2++;
                    break;
                    }
                }
                if(c2==0) {
                    cout<<"1\n"<<i<<"\n";
                    return ;
                }
            }
	}
	cout<<2<<endl;
	cout<<n-1<<" "<<n<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}