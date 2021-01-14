/*
   author: rishi_mohan
   created_at: 09-01-2021  05:27 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n; cin >> n;
    vector<int> v(n), dp(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
        if(i==0) dp[i] = 1;
        else{
            if(v[i]>v[i-1]) dp[i] = dp[i-1]+1;
            else dp[i] = 1;
        }
    }
    cout << *max_element(all(dp)) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    //cin >> t;
    while(t--) Solve();
}
