/* 
   author: rishi_mohan
   created_at: Sat 19 Dec 2020 07:45 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n, m;
    cin >> n >> m;
    if(n<m) swap(n,m);
    if((n+m)%3==0 && 2*m>=n) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

