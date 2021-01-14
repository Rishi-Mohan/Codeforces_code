/* 
   author: rishi_mohan
   created_at: Wed 30 Dec 2020 12:19 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
   int n;
   cin >> n;
   int mid = 0;

   if(n&1) mid = (n+1)/2;
   else mid = (n/2);

   int h = (n&1?0:1);
   int r = 0;
   
   for(int i=1; i<=n; i++){
        r = i;
        if(i>mid) r = 2*mid-(i-h);  
        int j = 0;
        for(j=1; j<=r-1; j++) cout << ' ';
        cout << '*';
        bool ok = 0;
        for(int k=1; k<=n-2*j; k++) {
            ok=1; cout << ' ';
        }
        if(n&1^1 || (n&1 && ok)) cout << '*';
        cout << '\n';
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

