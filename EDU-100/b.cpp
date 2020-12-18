/* 
   author: rishi_mohan
   created_at: Thu 17 Dec 2020 09:16 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long int
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    ll odd=0, even=0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(i&1) odd+=v[i];
        else even+=v[i];
    }
    // changing smaller value to 1 give less delta
    if(odd <= even){
         for(int i=1; i<n; i+=2){
            v[i]=1;
         }
    }
    else{
        for(int i=0; i<n; i+=2){
            v[i]=1;
        }
    }
    for(auto i: v) cout << i << ' ';
    cout << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

