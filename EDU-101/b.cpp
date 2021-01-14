/* 
   author: rishi_mohan
   created_at: Mon 28 Dec 2020 07:56 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n;
    cin >> n;
    int x;
    int ma=0, pa=0, sum1 =0, sum2=0;
    for(int i=0; i<n; i++) {
        cin >> x;
        sum1 += x;
        ma = max(ma , sum1);
    }
    int m;
    cin >> m;
    for(int j=0; j<m; j++) {
        cin >> x;
        sum2 += x;
        pa = max(pa, sum2);
    }
    ma += pa;
    ma = max(ma, 0);
    cout << ma << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

