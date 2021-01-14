/* 
   author: rishi_mohan
   created_at: Wed 30 Dec 2020 08:55 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    string str; cin >> str;
    int ans = 0;
    int n = str.size();
   // abbdc
   string s;
    for(int i=0; i<n-2; i++){
        if(i==0){
            s+=str[0]; s+=str[1]; s+=str[2];
            if(s[0]==s[1] && s[1]==s[2]){
                s[1]='?'; s[2]='?';
                ans+=2;
            }
            else if(s[0]==s[2] && s[0]!=s[1]) {s[2]='?'; ans+=1;}
            else if(s[0]==s[1] && s[1]!=s[2]) {s[1]='?';ans+=1;}
            else if(s[1]==s[2] && s[0]!=s[1]) {s[2]='?';ans+=1;}
        }
        else{
            s.erase(s.begin());
            s+=str[i+2];
            if(s[0]==s[1] && s[1]==s[2]){
                s[1]='?'; s[2]='?';
                ans+=2;
            }

            else if(s[0]==s[2] && s[0]!=s[1] && s[2]!='?') {s[2]='?'; ans+=1;}
            else if(s[0]==s[1] && s[1]!=s[2] && s[0]!='?') {s[1]='?';ans+=1;}
            else if(s[1]==s[2] && s[0]!=s[1] && s[1]!='?') {s[2]='?';ans+=1;}

        }
   }
    if(n==2 && str[0]==str[1]) ans=1;
    cout << ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

