/*
   author: rishi_mohan
   created_at: 08-01-2021  03:51 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int a, b;
    cin >> a >> b;
    ll res = 1;
    while(b>0){
        if(b&1) res = res*a;
        a=a*a;
        b>>=1;
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    // cin >> t;
    while(t--) Solve();
}
