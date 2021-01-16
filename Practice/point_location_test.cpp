/*
   author: rishi_mohan
   created_at: 17-01-2021  12:23 AM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    ll x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    x2-=x1; y2-=y1; x3-=x1; y3-=y1;
    if((x3*y2 - x2*y3) < 0){
        cout << "LEFT" << '\n';
    }
    else if((x3*y2 - x2*y3) > 0){
        cout << "RIGHT" << '\n';
    }
    else cout << "TOUCH" << '\n';

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    cin >> t;
    while(t--) Solve();
}
