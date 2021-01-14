/* 
   author: rishi_mohan
   created_at: Fri 01 Jan 2021 10:34 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n, k, d;
    cin >> n >> k >> d;
    int total = 0;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        total += x;
    }
    cout << min((total/k), d) << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

