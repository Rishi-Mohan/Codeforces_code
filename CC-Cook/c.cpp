/* 
   author: rishi_mohan
   created_at: Mon 21 Dec 2020 10:14 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    string s;
    cin >> s;
    int n = s.size();

    int cnt_one = count(all(s),'1');
    int cnt_zero = n-cnt_one;
    if(cnt_one==0 || cnt_zero==0) {
        cout << "-1" << '\n';
        return;
    }
    
    int k = min(cnt_one, cnt_zero);
    cnt_one -= k;
    cnt_zero -= k;
    int sum = cnt_one + cnt_zero;
    if(sum!=0 && sum&1) cout << "-1" << '\n';
    else cout << sum/2 << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

