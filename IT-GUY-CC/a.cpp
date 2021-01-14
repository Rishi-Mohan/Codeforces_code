/* 
   author: rishi_mohan
   created_at: Fri 01 Jan 2021 12:45 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n; cin >> n;
    int ans = 0;
    for(int i=0; i<n; i++){
        int x;  cin >> x; x %= 6; 
        if(x==0) ans += 6;
        else ans += x;
    }
    cout << ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

