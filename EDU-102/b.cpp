/*
   author: rishi_mohan
   created_at: 14-01-2021  08:16 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    string a, b;
    cin >> a >> b;
    if(a.size()>b.size()) swap(a,b);
    // a = small , b = large
    int n = a.size();
    int m = b.size();
    int k = (n*m)/__gcd(n,m);

    string ans;
    for(int i=0; i<k/n; i++) ans += a;

    bool ok = 1;
    for(int i=0; i<k; i+=n)
    {
        if(ans.substr(i,n)!=a) {
            ok = 0;
            break;
        }
    }
    for(int i=0; i<k ;i+=m){
        if(ans.substr(i,m)!=b){
            ok = 0;
            break;
        }
    }
    if(ok) cout << ans << '\n';
    else cout << "-1\n";

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    cin >> t;
    while(t--) Solve();
}
