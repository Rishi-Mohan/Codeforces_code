/* 
   author: rishi_mohan
   created_at: Fri 01 Jan 2021 10:12 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    // 0000 0001 0010 0011 0100
    int n; cin >> n;
    string s; cin >> s;
    string ans;
    for(int i=0; i<n; i+=4){
        string temp = s.substr(i,4);
        int val = 0;
        reverse(all(temp));
        for(int i=0; i<4; i++){
            if(temp[i]=='1') val += pow(2,i);
        }
        ans += (val+'a');
    }
    cout << ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

