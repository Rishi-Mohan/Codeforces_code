/* 
   author: rishi_mohan
   created_at: Wed 06 Jan 2021 11:28 AM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n, x;
    cin >> n >> x;
    ll ans = 0;
    for(int i=0; i<n; i++){
        int num, NUM;
        cin >> num;
        NUM = num;
        ans += num;
        int cnt = 0;
        while(num%x==0){
            num/=x;
            cnt++;
        }
        
        cout << cnt << '\n';
        ans += (cnt*NUM);
    }
    cout << ans << '\n';
}
//4+4 6 8+8+8 2

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

