/* 
   author: rishi_mohan
   created_at: Fri 25 Dec 2020 10:11 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    vector<int> v(4);
    for(int i=0; i<4; i++) cin >> v[i];
    sort(all(v));
    cout << v[0] * v[2] << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

