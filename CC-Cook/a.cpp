/* 
   author: rishi_mohan
   created_at: Mon 21 Dec 2020 09:26 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for(auto i : s){
        if(i=='1') cnt++;
    }
    cnt+=(120-n);
    int res = (120*75)/100;
    cout << ((cnt>=res)?"YES" : "NO") << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

