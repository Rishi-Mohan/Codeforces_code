/* 
   author: rishi_mohan
   created_at: Wed 30 Dec 2020 07:59 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            s.insert(v[j]-v[i]);
        }
    }
    cout << s.size() << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

