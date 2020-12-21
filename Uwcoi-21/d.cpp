/* 
   author: rishi_mohan
   created_at: Sat 19 Dec 2020 11:44 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    ll n, m ,k;
    cin >> n >> m >> k;
    ll x1, y1, x2, y2;
    ll ans = 0;
    for(int i=0; i<k ;i++){
        cin >> x1 >> y1 >> x2 >> y2;
        ans += (abs(x1-x2) + abs(y1-y2)*2);
    }
    cout << ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
//	cin >> t;
	while(t--) Solve();
}

