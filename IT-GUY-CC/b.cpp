/* 
   author: rishi_mohan
   created_at: Fri 01 Jan 2021 02:47 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    string s; cin >> s;
    bool ok = 0;
    for(auto i : s) if((i-'0')&1^1) {ok = 1; break;}
    cout << (ok?1:0) << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

