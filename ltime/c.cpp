/* 
   author: rishi_mohan
   created_at: Sat 26 Dec 2020 10:51 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n; 
    cin >> n;
    string a, b; cin >> a >> b;
    int o1 = 0, z1 = 0 , o2=0, z2 =0;
    for(auto u : a) if(u=='1') o1++; else z1++;
    for(auto u : b) if(u=='1') o2++; else z2++;

    int _not =0, _yes = 0;
    if(o1==o2 && z1==z2){
        bool good = 1;
        for(int i=0; i<n; i++){
            if(a[i]!=b[i]){
                if(a[i]=='0' && b[i]=='1'){
                    _not++;
                }
                else _yes++;
            }
            if(_not>_yes){
                good = 0;
                break;
            }
        }
        cout << (good?"Yes":"No") << '\n';
    }
    else cout << "No" << '\n';


}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

