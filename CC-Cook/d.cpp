/* 
   author: rishi_mohan
   created_at: Mon 21 Dec 2020 11:15 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> v(m);
    for(int i=0; i<m; i++) {
        ll x;
        cin >> x;
        v[i] = x;
    }
   
    ll ans = 0;
    while(1){
        bool ok = 0;
        for(int i=0; i<m; i++){
            ll r = v[i];
            ll sum = 0;
            if(v[i]>n) {
                r = r%n;
                sum = n/2;
            }
            else
              sum = n-r;

            //if(r==0) continue;
            cout << ans << '\n';
            if(r==0 || sum<=0) break;
            ans += sum;
            n -= sum;
            ok = 1;
            break;
        }
        if(!ok) break;
    }
    cout << ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

