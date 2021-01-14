/* 
   author: rishi_mohan
   created_at: Tue 29 Dec 2020 09:52 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    if(n==1){
        if(v[0]>=x) cout << "YES" << '\n';
        else cout << "NO" << '\n';

        return;
    }
    vector<pair<int,int>> temp;
    for(int i=0; i<n/2; i++){
        int sum = v[i] + v[n-i-1];
        int k = min(v[i],v[n-i-1]);
        temp.push_back({k,sum-k});
    } 
    int ans = 0;
    for(int i=0; i<temp.size()-1; i++){
        if(temp[i].second < temp[i+1].first){
            ans += temp[i+1].first;
            temp[i+1].first = 0;
        }
        else {
            ans += temp[i].second;
        }
    }
    ans += temp[temp.size()-1].second;
    if(n&1) ans += v[n/2];
    
    if(ans>=x) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

