/* 
   author: rishi_mohan
   created_at: Sat 26 Dec 2020 09:40 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n, k;
    cin >> n >> k;
    ll sum = 0;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        sum += x;
    }
    cout << (sum%k==0?0:1) << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

