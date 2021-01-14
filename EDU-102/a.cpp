/*
   author: rishi_mohan
   created_at: 14-01-2021  07:39 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    bool ok = 0;
    for(int i=0; i<n; i++) {
        cin >> v[i];
        if(v[i]>d) ok = 1;
    }
    if(!ok){
        cout << "YES\n"; return;
    }
    sort(all(v));
    if(n>=2 && v[0]+v[1]<=d) cout << "YES" << '\n';
    else if(n==1){
        if(v[0]<=d) cout << "YES" << '\n';
        else cout << "NO\n";
    }
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    cin >> t;
    while(t--) Solve();
}
