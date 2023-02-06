#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long
#include <algorithm>
#include <queue>
#include <set>
#include <map>
#include <limits.h>
#include <stack>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef pair<long long,long long> pll;
typedef pair<int,int> pii;
int main () {
    fio;
    int n; int m; cin >> n >> m;
    
    //find path from node 0 to n-1;

    map<int, vector<pair<int,int>>> g;
    
    for(int i = 0; i < m; i++){
        int a, b, w;
        cin >> a >> b >> w;
        g[a].push_back({b,w});
        g[b].push_back({a,w});
    }

    vector<pair<int,int>> d;
    for(int i = 0; i< n+1; i++){
        d.push_back({INT_MAX, -1});
    }
    // {distance (length of shortest path to node i), prev}
    vector<bool> visited (n+1,false);

    priority_queue<pii, vector<pii>, greater<pii>> q;
    //{distance, node}
    q.push({0, 1});
    d[1] = {0,-1};
    while(!q.empty()){
        pair<int,int> p = q.top();
        int dist = p.first;
        int cur = p.second;
        q.pop();
        if(visited[cur]){
            continue;
        }
        visited[cur] = true;
        for(int i = 0; i < g[cur].size(); i++){
            int val = g[cur][i].first;
            int cost = g[cur][i].second;
            //found shorter path
            if(!visited[val] && dist + cost < d[val].first){
                d[val].second = cur;
                d[val].first = dist+cost;
                q.push({dist+cost, val});
            }
        }
        visited[cur] = 1;
    }

    // for(auto i: d){
    //     cout << i.first << " " << i.second << "\n";
    // }
    if(d[n].first == INT_MAX){
        cout << "-1";
        return 0;
    }

    stack<int> st;
    int cur = n;
    while(cur != 1){
        st.push(cur);
        cur = d[cur].second;
    }
    st.push(1);
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}