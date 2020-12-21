/* 
   author: rishi_mohan
   created_at: Mon 21 Dec 2020 10:00 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    ll x, y, k, n;
    cin >> x >> y >> k >> n;
    if(x<y) swap(x,y);
    if((x-y)%k==0 && ((x-y)/k)%2==0) cout << "Yes" << '\n';
    else cout << "No" << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

