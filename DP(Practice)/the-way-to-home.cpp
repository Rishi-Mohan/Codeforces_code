/*
   author: rishi_mohan
   created_at: 09-01-2021  07:02 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n, k;
    cin >> n >> k;
    string s; cin >> s;

    vector<int> dp(n,1000); dp[0]=0;
    for(int i=0; i<n-1; i++){
        if(s[i]=='1'){
            for(int j=1; j<=k; j++){
                if(s[i+j]=='1' && i+j<n)
                     dp[i+j] = min(dp[i+j], dp[i]+1);
            }
        }
    }

    cout << (dp[n-1]==1000?-1:dp[n-1]);

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    //cin >> t;
    while(t--) Solve();
}
