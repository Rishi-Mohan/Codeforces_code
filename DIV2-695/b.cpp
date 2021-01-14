/*1 6 2 2 3 10 -> 5=>2
    * . * .
    *
  4 4 3 2 2 1 2 -> 1=>2
            .
  1 6 2 5 2 10  -> 2=>6
    * . * .
          .
  1 2 1 1 2 1 1 0 1
    *     *     .

*/
/*
   author: rishi_mohan
   created_at: 08-01-2021  09:40 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    vector<int> ind;
    for(int i=1; i<= n-2; i++){
        if(v[i]>v[i-1] && v[i]>v[i+1]) ind.push_back(i);
        else if(v[i]<v[i-1] && v[i]<v[i+1]) ind.push_back(i);
    }
    //for(auto i: ind) cout << i << ' ';
    //cout << '\n';
    int ma = 0;
    int cnt = 1;
    int sz = ind.size();
    for(int i=1; i<sz; i++){
        if(ind[i]-1==ind[i-1]){
            cnt++;
        }
        else {
            ma = max(ma,cnt);
            cnt = 1;
        }
    }
    ma = max(cnt, ma);
    //cout << ind.size() << ' ' << ma << '\n';
    if(ind.size()==0 || ind.size()==1) cout << "0" << '\n';
    else cout << sz-ma + (ma>=4 ?1:0) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    cin >> t;
    while(t--) Solve();
}
