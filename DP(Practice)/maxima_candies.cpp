/*
   author: rishi_mohan
   created_at: 10-01-2021  10:15 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
   /* int a, b;
    cin >> a >> b;
    int ans = 0;*/
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
    // cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    while(t--) Solve();
}

/*
   author: rishi_mohan
   created_at: 10-01-2021  09:45 PM
*/
/*#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n; cin >> n;
    vector<int> dp;
    ll sum = 0;
    for(int i=1; i<=n; i++){
        if(sum+i<=n) {
            dp.push_back(i);
            sum += i;
        }
    }
    n -= sum;
    int sz = dp.size()-1;
    dp[sz] += n;

    cout << dp.size() << '\n';
    for(auto i : dp) cout << i << ' ';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    while(t--) Solve();
}
*/
