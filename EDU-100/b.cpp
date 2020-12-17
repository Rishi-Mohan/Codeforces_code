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
    vector<ll> v(n), a(n);
    ll sum =0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        a[i] = v[i];
        sum+=v[i];
    }
    ll avg = 0;
    sort(all(a));
    if(n%2==0) {
        avg = (a[n/2]+a[(n/2)-1])/2;
    }
    else{
        avg = a[(n/2)];
    }
    vector<ll> b(n);
    ll diff  = 0;
    for(int i=0; i<n; i++){
        ll temp = avg*(v[i]/avg);
        if(temp==0) temp = 1;
        b[i] = temp;
        //diff += abs(v[i]-b[i]);
    }
    //cout << "diff " << 2*diff << " " << "sum "  << sum << '\n';
    for(auto i : b) cout << i << " ";
    cout << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

