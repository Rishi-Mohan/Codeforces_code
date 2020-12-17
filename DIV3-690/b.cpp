/* 
   author: rishi_mohan
   created_at: Thu 17 Dec 2020 06:28 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    if(n<4){cout << "NO";}
    else{
        if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0') cout << "YES";
        else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0') cout << "YES";
        else if(s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1]=='0') cout << "YES";
        else if(s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0') cout << "YES";
        else if(s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0') cout << "YES";
        else cout << "NO";
    }
    cout << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

