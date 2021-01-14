/*
   author: rishi_mohan
   created_at: 10-01-2021  09:34 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n, k;
    cin >> n >> k;
    int ans = 0;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(i!=0){
            int sum = v[i]+v[i-1];
            if(sum<k){
                ans += abs(k-sum);
                v[i] += abs(k-sum);
            }
        }
    }
    cout << ans << '\n';
    for(auto i : v) cout << i << ' ';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    //cin >> t;
    while(t--) Solve();
}
