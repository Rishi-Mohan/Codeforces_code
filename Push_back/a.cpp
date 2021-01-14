/* 
   author: rishi_mohan
   created_at: Mon 04 Jan 2021 05:58 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n;
    cin >> n;
    int mid = (n-1)/2;
    int r = 0;
    for(int i=0; i<n; i++) cout <<'1'; 
    cout << '\n';
    for(int i=1; i<=n-2; i++){    
        r = i;
        cout << '1';
        if(i>mid) r = 2*mid-i;
        int k = 0;
        for( k=1; k<=r-1; k++) cout << ' ';
        cout << '1';
        bool ok = 0;
        for(int l=1; l<=(n-2)-2*k; l++) {
            cout << ' '; ok = 1;
        }
        if(ok) cout << '1';
        for(int l=1; l<=r-1; l++) cout << ' ';
        cout << '1';
        cout << '\n';
    }
    for(int i=0; i<n; i++) cout << '1';
    cout << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

