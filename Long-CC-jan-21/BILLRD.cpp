/* 
   author: rishi_mohan
   created_at: Fri 01 Jan 2021 10:53 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    ll n, k, x, y;
    cin >> n >> k >> x >> y;
    vector<pair<ll,ll>> cord(4);
    if(x==y){
        cout << n << ' ' << n << '\n';
        return;
    }
    if(x<y){
        cord[0] = {x+n-y,n};  cord[1] = {n,x+n-y};
        cord[2] = {(y-x),0};  cord[3] = {0,(y-x)};
    }
    else{
        cord[0] = {n,y+n-x};  cord[1] = {y+n-x,n};
        cord[2] = {0, (x-y)}; cord[3] = {(x-y),0};
    }
    k--;
    cout << cord[k%4].first << ' ' << cord[k%4].second << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

