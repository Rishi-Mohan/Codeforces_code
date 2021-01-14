/*
   author: rishi_mohan
   created_at: 09-01-2021  06:34 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n; cin >> n;
    vector<int> v(n+1); v[1] = 1;
    for(int i=2; i<=n; i++){
        v[i] = v[i-1] + (i-1)*4;
    }
    cout << v[n];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    // cin >> t;
    while(t--) Solve();
}
