/* 
   author: rishi_mohan
   created_at: Wed 30 Dec 2020 08:18 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n; cin >> n;
    map<int,int> mp;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    set<int> s;
    int ans = 0;
    for(auto i : mp){
            bool ok = 0;
            if(s.find(i.first)==s.end()){
                ans+=1;
                ok = 1;
                s.insert(i.first);
            }
            if(i.second!=1 && s.find(i.first+1)==s.end()){
                ans+=1;
                s.insert(i.first+1);
            }
            if(!ok && i.second==1 && s.find(i.first)!=s.end()){
                if(s.find(i.first+1)==s.end()){
                    ans+=1;
                    s.insert(i.first+1);
                }
            }
    }
    cout << ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

