/*
   author: rishi_mohan
   created_at: 09-01-2021  07:55 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n; cin >> n;
    int zero = 0;
    ll ans = 0, prod = 1;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        if(x<0){
            ans += (x*(-1) -1);
            prod *= -1;
        }
        else if(x==0) zero+=1;
        else ans +=(x-1);
    }
    ans += zero;
    if(prod==-1 && zero==0) ans += 2;
    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    // cin >> t;
    while(t--) Solve();
}
