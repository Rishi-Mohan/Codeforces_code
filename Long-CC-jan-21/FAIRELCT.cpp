/* 
   author: rishi_mohan
   created_at: Fri 01 Jan 2021 03:29 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n, m;
    cin >> n >> m;
    vector<int> A(n), B(m);
    int sum_A = 0, sum_B=0;
    for(int i=0; i<n; i++){
        cin >> A[i];
        sum_A += A[i];
    }
    for(int i=0; i<m; i++){
        cin >> B[i];
        sum_B += B[i];
    }
    if(sum_A > sum_B){
        cout << "0" << '\n';
        return;
    }
    sort(all(A));
    sort(all(B),greater<int>());
    int ans = 0; 
    for(int i=0; i<min(n,m); i++){
        sum_A-=A[i]; sum_A+=B[i];
        sum_B-=B[i]; sum_B+=A[i];
        ans += 1;
        if(sum_A > sum_B){
            break;
        }
    }
    if(sum_A > sum_B) cout << ans << '\n';
    else cout << "-1" << '\n';

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

