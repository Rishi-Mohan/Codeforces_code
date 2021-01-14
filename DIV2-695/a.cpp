/*
   author: rishi_mohan
   created_at: 08-01-2021  08:03 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()
// 9890
// 98789
// 9876789
// 987656789
// ...
// 09876543210 123456789
// --------------------1
// 989012345
void Solve(){
    int n; cin >> n;
    if(n==1) cout << '9';
    else if(n==2) cout << "98";
    else if(n==3) cout << "989";
    else{
        cout << "989";
        string r = "0123456789";
        n-=4;
        for(int i=0; i<=n; i++){
            cout << r[i%10];
        }
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    cin >> t;
    while(t--) Solve();
}
