/* 
   author: rishi_mohan
   created_at: Thu 17 Dec 2020 07:20 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n;
    cin >> n;
    vector<pair<int,int>> seg(n);
    vector<int> left(n), right(n);
    for(int i=0; i<n; i++){
        cin >> left[i] >> right[i];
        seg[i].first = left[i];
        seg[i].second= right[i];
    }

    sort(all(left)); sort(all(right));
    int ans = n;
    for(int i=0; i<n; i++){
        // check for segment whose right is less than the left of current segment
        int left_less = lower_bound(all(right),seg[i].first)-right.begin();
        // check for segment whose left is greater than the right of the current segment
        int right_greater = upper_bound(all(left),seg[i].second)-left.begin();

        ans = min(ans , (left_less+n-right_greater)); 
        // n-right_greater because right greater is index of first greater element but 
        // wanted to count the total element greater so we subtract it;
    }
    cout << ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

