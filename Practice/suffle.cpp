/* 
   author: rishi_mohan
   created_at: Sat 19 Dec 2020 07:12 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n, x, m;
    cin >> n >> x >> m;
    set<int> s;
    int ans = 0;
    x--;
    int l, r;
    while(m--){
        cin >> l >> r; l--; r--;
        if(x>=l && x<=r){
            v.assign(v.begin()+l, v.end()+r, 1);
        }
        else if(count(v.begin()+l, v.begin()+r, 1)>=1){
            //v.assign
        }

    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

