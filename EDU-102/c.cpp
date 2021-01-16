/*
   author: rishi_mohan
   created_at: 15-01-2021  07:57 PM
*/
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
#define    all(x)        (x).begin(),(x).end()

const int mxn = 2*1e5+2;
vector<vector<int>> adj(mxn);
vector<int> color(mxn);

bool isBipartite(){ // O(V+E)
    queue<int> q;
    q.push(1);
    // 0-> blue  1-> red
    color[1] = 1;

    while(!q.empty()){
        int cur_node = q.front();  q.pop();
        for(auto i : adj[cur_node]){
            // if color of adjacent vertex is same then odd length cycle detected
            if(color[i] == color[cur_node])
                return false;
            // color is not assigned so assigned opposite color to the adjacent one
            // unvisited node
            if(color[i]==-1) {
                color[i] = 1-color[cur_node];
                q.push(i);
            }
        }
    }
    return true;
}

void Solve(){
    int vertex, edges;
    cin >> vertex >> edges;

    adj.resize(vertex+1);
    color.assign(vertex+1,-1);
    vector<pair<int,int>> inorder(edges);

    for(int i=0; i<edges; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        inorder[i] = {u,v};
    }

    if(isBipartite()){
        cout << "YES\n";
        string ans(edges,'0');
        for(int i=0; i<edges; i++){
            if(color[inorder[i].first]==1) ans[i]='1';
        }
        cout << ans << '\n';
        // for(auto i: color) cout << i <<' ';
    }
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  int t = 1;
    while(t--) Solve();
}
