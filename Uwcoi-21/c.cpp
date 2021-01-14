/* 
   author: rishi_mohan
   created_at: Sat 19 Dec 2020 09:52 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(ll i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()
// IDEA: small + large is always gives solution
void Solve(){
    ll n, k;
    cin >> n >> k;
    set<pair<ll,ll>> p;
    for(ll i=0; i<=n; i++){
        ll x;
        cin >> x;
        p.insert({x,i});
    }
    for(ll i=0; i<n; i++){
        // small
        ll target = k;
        pair<ll,ll> s = *p.begin();
        p.erase(p.begin());
        cout << s.second << ' ' << s.first << ' ';
        target -= s.first;
        // large
        auto it = p.end();
        it--;
        s = *it;
        p.erase(it);
        cout << s.second << ' ' << target << '\n';
        s.first-=target;
        p.insert({s.first, s.second});
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  ll t = 1;
	cin >> t;
	while(t--) Solve();
}

