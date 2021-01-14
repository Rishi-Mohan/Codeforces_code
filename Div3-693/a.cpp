/* 
   author: rishi_mohan
   created_at: Mon 04 Jan 2021 08:01 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    ll w, h, n,W=0,H=0;
    cin >> w >> h >> n;
    ll ans = 0;
    W=w;H=h;
        while(w%2==0){
            w/=2;
        }
        while(h%2==0){
            h/=2;
        }
        ans = (W/w)*(H/h);
    if(ans>=n) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

