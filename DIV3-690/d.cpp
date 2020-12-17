/* 
   author: rishi_mohan
   created_at: Thu 17 Dec 2020 06:39 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()
// IDEA: 
//      sum is constant
//      problem is only allowed operation is to add adjacent element 
//      and we have to find minimum operation required such that sum of partition become equal 
void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    int sum =0;
    for(auto &a : v){
        cin >> a;
        sum += a;
    }
    int ans = 0;
    // times is number of partition [we check all possible partition]
    for(int times=n; times>=1; times--){
        // if not divisible then obvious it is not possible
        if(sum%times!=0) continue;
        // target is required sum for each partition
        int target = sum / times;

        int temp_sum = 0;
        bool ok = 1;
        // here i check every partition sum
        for(int i=0; i<n; i++){
            temp_sum+=v[i];
            if(temp_sum == target){
                   temp_sum = 0;
            }
            if(temp_sum > target){
                ok = 0;
                break;
            }
        }
        // if true then we store max of times possible
        if(ok && temp_sum==0){
            ans = max(ans, times);
        }
    }
    // result is n-equal sum[i.e; ans]
    cout << n-ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

