/* 
   author: rishi_mohan
   created_at: Thu 17 Dec 2020 06:17 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    int s = 0, e = n-1;
    bool state = 1;
    while(s<=e){
        if(state){
           cout << v[s] << ' ';
           s++;
        }
        else{
            cout << v[e] << ' ';
            e--;
        } 
        state^=1;
    }
    cout << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

