/*
   author: rishi_mohan
   created_at: 16-01-2021  02:34 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long

void Solve(){
    ll n;
    cin >> n;
    ll cnt_digit=1, mul = 1, sub = 0;

    ll d = 0;
    while(n>9){
        sub = 9*mul*cnt_digit;
        if(n<sub) break;
        d+=(sub/cnt_digit);
        n-=sub;
        mul*=10;
        cnt_digit+=1;
    }

    ll num = n/cnt_digit;
    d+=num;


    if(n%cnt_digit!=0){
        d+=1;
        int need = cnt_digit-(n%cnt_digit);
        while(need--){
            d /= 10;
        }
    }

    cout << (d%10) << '\n';

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    cin >> t;
    while(t--) Solve();
}
