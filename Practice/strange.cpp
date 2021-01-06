/*
   author: rishi_mohan
   created_at: Wed 06 Jan 2021 05:32 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

// ceil((a+b)/x) <= ceil(a/x) + ceil(b/x)

void Solve(){
    int n, x;
    cin >> n >> x;
    ll sum = 0;
    ll maximum = 0, minimum = 0;
    for(int i=0; i<n; i++){
        int num; cin >> num;
        sum += num;
        maximum += ceil((num*1.0)/x);
    }
    minimum = ceil((sum*1.0)/x);
    cout << minimum << ' ' << maximum << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

