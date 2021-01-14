/* 
   author: rishi_mohan
   created_at: Tue 29 Dec 2020 07:08 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    ll a, b; 
    cin >> a >> b;
    bitset<64> A(a), B(b);
    int _a=0, _b=0;
    if(A.count() == B.count()){
        for(int i=63; i>=0; i--){
            if(A.test(i)) {_a = i+1; break;}
        }
        for(int i=63; i>=0; i--){
            if(B.test(i)) {_b = i+1; break;}
        }
        int k = abs(_a-_b);
        int ans = 0;
        ans += (k/3);
        k-=(k/3)*3;
        ans += (k/2);
        k-=(k/2)*2;
        ans += k;
        if(ans==0 && a!=b) ans = -1;
        cout << ans << '\n';
    }
    else cout << "-1" << '\n';

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

