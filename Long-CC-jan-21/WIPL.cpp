/* 
   author: rishi_mohan
   created_at: Fri 01 Jan 2021 04:01 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n, k;
    cin >> n >> k;
    vector<int> H(n);
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> H[i];
        sum += H[i];
    }
    if(n==1 || 2*k>sum){
        cout << "-1" << '\n'; return;
    }
    sort(all(H),greater<int>());

    int Mike = H[0], Tarcy = H[1];
    if(Mike>=k && Tarcy>=k){
        cout << "2" << '\n';
        return;
    }
    // 20 19 2 1 -> 21
    // 4 3 3 1 -> 5
    // 8 7 5 2 2 -> 12
    // 20 19 10 8 8 7 7 7 -> 38
    int ans1 = 2, ans2 = 0;
    for(int i=2; i<n; i++){
        if(Mike <= Tarcy && Mike<k) {
            Mike += H[i];
            ans1+=1;
        }
        else if(Tarcy<Mike && Tarcy<k) {
            Tarcy += H[i];
            ans1+=1;
        }
        else if(Mike>=k && Tarcy<k){
            Tarcy+=H[i];
            ans1+=1;
        }
        else if(Tarcy>=k && Mike<k){
            Mike += H[i];
            ans1+=1;
        }
        if(Mike>=k && Tarcy>=k){
            break;
        } 
    }
    if(Mike>=k && Tarcy>=k){}
    else ans1 = INT_MAX;

    int M=0,T=0;
    for(int i=0; i<n; i++){
        if(i&1^1){
            if(M<k){
                M+=H[i];
                ans2++;
            }
            else if(T<k){
                T+=H[i];
                ans2++;
            }
        }
        if(i&1){
            if(T<k){
                T+=H[i];
                ans2++;
            }
            else if(M<k){
                M+=H[i];
                ans2++;
            }
        }
        if(M>=k && T>=k){
            break;
        } 
     }
     if(M>=k && T>=k){}
     else ans2 = INT_MAX;
    
     if(ans1==ans2 && ans1==INT_MAX) cout << "-1" << '\n';
     else cout << min(ans1, ans2) << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

