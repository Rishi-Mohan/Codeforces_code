/* 
   author: rishi_mohan
   created_at: Tue 05 Jan 2021 03:44 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    rep(i,a,b)    for(int i=a; i<b; i++)
#define    all(x)        (x).begin(),(x).end()

void Solve(){
    int n, m; 
    cin >> n >> m;
    vector<int> v(n),a(m);
    set<int>OR,AND,s4;

    for(int i=0; i<n; i++) {
        cin >> v[i];
        OR.insert(v[i]);
        s4.insert(v[i]);
    }
    OR.insert(0);
    s4.insert(0);
    
    for(int i=0; i<m; i++) cin >> a[i];
    int x = 0;
    // unique or value we get from first 
    for(auto j : OR){
        //x = j;
        for(int i=0; i<n; i++){
            //x|=v[i];
            //OR.insert(x);
            OR.insert(j|v[i]);
            //s4.insert(x);
            s4.insert(j|v[i]);
        }
    }
    // unique and value from second
    int X=0;
    for(int i=0; i<m; i++){
        //X = v[i];
        for(int j=0; j<m; j++){
            //X&=a[j];
            //AND.insert(X);
            AND.insert(v[i]&v[j]);
            //s4.insert(X);
            s4.insert(v[i]&v[j]);
        }
    }
    // unique and value by doing & with unique or and unique and value 
    int prev = 0;
    while(s4.size()!=prev){
        prev = s4.size();
        set<int>s3;
        for(auto i : OR){     // or & and
            int x = i;
            for(auto j : AND){
                //x&=j;
                //s3.insert(x);
                s3.insert(i&j);
                //s4.insert(x);
                s4.insert(i&j);
            }
        }
        for(auto i : s3){
            AND.insert(i);
        }
        set<int> s5;
        for(auto i : AND){ // and | or
            //int x = i;
            for(auto j : OR){
                //x|=j;
                //s5.insert(x);
                s5.insert(i|j);
                s4.insert(i|j);
                //s4.insert(x);
            }
        }
        for(auto i : s5){
            OR.insert(i);
        }
    /*    set<int> s6;
        for(auto i : OR){ // or | or
            int x = i;
            for(auto j : OR){
                x|=j;
                s6.insert(x);
                s6.insert(i|j);
                s4.insert(x); 
                s4.insert(i|j);
            }
        }
        for(auto u : s6){
            OR.insert(u);
        }
        set<int> s7;
        for(auto i : AND){ // and & and
            int x = i;
            for(auto j : AND){
                x&=j;
                s7.insert(x);
                s7.insert(i&j);
                s4.insert(x);
                s4.insert(i&j);
            }
        }
        for(auto u : s7){
            AND.insert(u);
        }*/
    }
    //for(auto i : s4) cout << i << ' ';
    //cout << '\n';
    for(auto i: OR) cout << i << ' ';
    cout << '\n';
    for(auto i: AND) cout << i << ' ';
    cout << '\n';
    for(auto i :s4) cout << i << ' ';
    cout << '\n';
    cout << '\n';
    //cout << s4.size() << '\n';
    //cout << s1.size() << ' ' << s2.size() << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
	cin >> t;
	while(t--) Solve();
}

