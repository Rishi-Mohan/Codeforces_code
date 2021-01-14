/* 
   author: rishi_mohan
   created_at: Sat 26 Dec 2020 09:29 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()
// logic:  Is to take 2 from max_occurence and 1 from least occurence
void Solve(){
    string str;
    cin >> str;
    map<char,int> mp;
    for(int i=0; i<str.size(); i++){
        mp[str[i]]++;
    }

    multiset<int>s;
    for(auto i: mp){
        s.insert(i.second);
    }

    int ans = 0;
    
    while(1){
        if(s.size()==0 || s.size()==1) break;
        // taking higner and lower element
        int i = *s.begin();
        auto itr = s.end();
        itr--;
        int it = *itr;
        s.erase(s.begin());
        s.erase(itr);
        if(i==1 && it==1) break;
        
        if(2*i<=it){
            ans += i;
            it-=(2*i);
            i=0;
        }
        else{
            int r = (i+it)/3;
            ans += r;
            i-=r;
            it-=(2*r);
        }
        // after prcess
        if(i!=0) s.insert(i);
        if(it!=0) s.insert(it);
    }
    // if element count is one atlast then check for 3 
    for(auto i : s){
        ans += (i/3);
    }
    cout << ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

