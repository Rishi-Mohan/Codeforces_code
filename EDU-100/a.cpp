/* 
   author: rishi_mohan
   created_at: Thu 17 Dec 2020 08:03 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    ll r = (a+b+c)/9;
    if(min({a,b,c})>=r && (a+b+c)%9==0) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

