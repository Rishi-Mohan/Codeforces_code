// Incorrect
/* 
   author: rishi_mohan
   created_at: Mon 21 Dec 2020 11:15 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    ll n, m;
    cin >> n >> m;
    int GCD = 0;
    for(int i=0; i<m; i++) {
        int x;
        cin >> x;
        if(i!=0) GCD = __gcd(x, GCD);
        else GCD = x;
    }
    int max_factor = 0;
    if(GCD >= n){
        for(int i=1; i*i<=GCD; i++){
            if(GCD%i==0){
                if(n>=i) max_factor = max(i, max_factor); 
                if(n>=(GCD/i)) max_factor = max(GCD/i, max_factor); 
            }
        }
    }
    else max_factor = GCD;
    cout << n-max_factor<< '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

