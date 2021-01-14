/*
   author: rishi_mohan
   created_at: 10-01-2021  10:15 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int a, b;
    cin >> a >> b;
    int ans = 0;
    cout << "hello";
    /*while(a>0){
        cout << a;
        if(a<=b) {
            a+=1; b-=2;
        }
        else {
            b+=1; a-=2;
        }
        ans += 1;
    }*/
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    while(t--) Solve();
}
