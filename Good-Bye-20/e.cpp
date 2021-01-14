/* 
   author: rishi_mohan
   created_at: Wed 30 Dec 2020 10:08 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()
const int m = 1e9+7;

void Solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        //bitset<32> A(x);
        v[i] = x;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                bitset<32> A(v[i]), B(v[j]), C(v[k]); 
                cout << v[i] << ' ' << v[j] << ' ' << v[k] << ' ' << (A&B) << ' ' << (B|C) << ' ' << ((A&B).to_ullong()*(B|C).to_ullong()) << '\n';  
            }
        }
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

