/*
   author: rishi_mohan
   created_at: 11-01-2021  10:35 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    string s;
    cin >> s;
    int ans = 0;
    int r = 10;
    while(s.size()!=1){
        cout << s << '\n';
        int ma = 0;
        for(int i=0; i<int(s.size()); i++){
            ma = max(ma, s[i]-'0');
        }
        int n = s.size();
        if(s[n-1]-'0'!=ma){
            if(s[n-1]!='0') { // (42-4), (30-3)
                cout << "as";
                int re =((s[n-1]-'0')+10-ma);

                s[n-1] = (re%10)+'0';
                s[n-2]=(s[n-2]-'0'-1)+'0';
                // 38
            }
            else{
                cout << "zero";
                int k = n-2;// 210001-4=209997
                while(s[k]=='0') {
                    k--;
                    s[k]='9';
                }
                s[k] = ((s[k]-'0')-1)+'0';
                int re = ((s[n-1]-'0')+10-ma);
                s[n-1] = (re%10)+'0';
            }
        }
        else s[n-1] = '0'; // 30
        while(s[0]=='0') s.erase(s.begin());
        //r--;
        //if(r==0) break;
        ans+=1;
    }
    cout <<s<<'\n';
    cout << ans;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    while(t--) Solve();
}
/*
*/
