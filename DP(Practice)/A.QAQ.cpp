/*
   author: rishi_mohan
   created_at: 09-01-2021  06:08 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    string s; cin >> s;
    const int n = s.size();
    vector<int> v(n+1);
    v[0] = 0;

    for(int i=1; i<=n; i++){
        v[i] = v[i-1];
        if(s[i-1]=='Q') v[i] += 1;
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='A'){
            ans += ((v[n]-v[i])*v[i]);
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    // cin >> t;
    while(t--) Solve();
}
