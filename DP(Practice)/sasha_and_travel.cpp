/*
   author: rishi_mohan
   created_at: 09-01-2021  08:41 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n, v;
    cin >> n >> v;
    int ans = 0;
    ans += (n-1<=v ? n-1 : v);
    n -= (n-1<=v ? n-1 : v);
    ans += (n*(n+1))/2;
    ans -= 1;
    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    while(t--) Solve();
}
