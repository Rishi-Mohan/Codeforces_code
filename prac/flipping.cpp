/*
   author: rishi_mohan
   created_at: 11-01-2021  09:10 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n;
    cin >> n;
    vector<int> v(n), dp(n);
    int cnt_1 = 0;

    for(int i=0; i<n; i++) {
        cin >> v[i];
        if(v[i]==1){
            dp[i] = -1;
            cnt_1++;
        }
        else dp[i] = 1;
    }

    int sum = 0, ma = 0;
    for(int i=0; i<n; i++){
        sum += dp[i];
        ma = max(ma, sum);
        sum = max(0, sum);

    }
    ma = max(sum, ma);

    cout << ma+cnt_1+(ma==0?-1:0) << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    // cin >> t;
    while(t--) Solve();
}
