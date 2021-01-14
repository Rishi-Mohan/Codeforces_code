/* 
   author: rishi_mohan
   created_at: Tue 29 Dec 2020 08:06 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

vector<ll> lt(26);
void pre(){
    ll r = 1;
    lt[0]=1;
    for(int i=1; i<26; i++){
        r<<=1;
        lt[i] = r;  
    }
}

void Solve(){
   ll n, k;
   cin >> n >> k;
   string ans(n,'a');
   pre();
   bitset<30> A(k);
   if(n>k || n<A.count()){
       cout << "-1" << '\n'; return;
   }
   if(n==k){
        cout << ans << '\n'; return;
   }
   multiset<int,greater<int>> temp;
   for(int i=29; i>=0; i--){
        if(A.test(i)) temp.insert(lt[i]); 

   }
   bool ok = 1;
   while(temp.size()!=n){
       int r = *temp.begin();
       temp.erase(temp.begin());
       temp.insert(r/2);
       temp.insert(r/2);

       if(temp.size()>n){
           ok = 0;
           break;
       }
   }
   if(ok){
       string ans;
       for(auto u : temp){
           int w = log2(u & -u);
           char ew = (char)('a'+w);
           ans += ew;
       }
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

