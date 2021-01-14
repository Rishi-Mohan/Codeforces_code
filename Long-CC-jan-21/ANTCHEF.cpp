/* 
   author: rishi_mohan
   created_at: Sat 02 Jan 2021 12:24 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n; cin >> n;
    vector<vector<ll>> v(n);
    for(int i=0; i<n; i++){
        int m; cin >> m;
        for(int j=0; j<m; j++){
            ll x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for(int i=0; i<n; i++){
        int pos = 0, neg = 0, sz = v[i].size();
        for(int j=0; j<sz; j++){
            if(v[i][j]>0) pos++;
            else neg++;
        } 
        if(n==1){
            ll ma = min(pos,neg);
            ll sum = ((ma-1)*(ma))/2; 
            ll ans = ((sz-1)-(ma-1)*2)*ma + sum*2;
            cout << ans << '\n';
            break;
        }
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

