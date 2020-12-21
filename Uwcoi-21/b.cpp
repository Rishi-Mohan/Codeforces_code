/* 
   author: rishi_mohan
   created_at: Sat 19 Dec 2020 09:07 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;
    sort(all(a)); sort(all(b));
    ll ans = 0;
    for(int i=0; i<m; i++){
        if(b[i]<a[0]){
            ans+=n;
        }
    }
    cout << ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	//cin >> t;
	while(t--) Solve();
}

