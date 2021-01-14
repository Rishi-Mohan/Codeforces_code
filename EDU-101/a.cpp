/* 
   author: rishi_mohan
   created_at: Mon 28 Dec 2020 07:56 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    string s;
    cin >> s;
    if(s.size()%2!=0) {cout << "NO" << '\n';  return;}
    if(s[0]==')') {cout << "NO" << '\n'; return;}
    if(s[s.size()-1]=='(') {cout << "NO" << '\n'; return;}
    cout << "YES" << '\n'; return;

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

