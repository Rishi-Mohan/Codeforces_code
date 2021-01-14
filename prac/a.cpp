/*
   author: rishi_mohan
   created_at: 11-01-2021  07:24 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n; cin >> n;
    int sum = 0;
    vector<int> v(n), c(n);
    int mx1 = 0, mx2=0;

    for(int i=0; i<n; i++){
        cin >> v[i] >> c[i];
        sum += v[i];
        if(c[i] >= mx1){
            mx2 = mx1;
            mx1 = c[i];
        }
        else if(c[i] >= mx2) mx2 = c[i];

    }

    for(int i=0; i<n; i++){
        cout << (sum-v[i])*(c[i]==mx1?mx2:mx1) << ' ';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    while(t--) Solve();
}
