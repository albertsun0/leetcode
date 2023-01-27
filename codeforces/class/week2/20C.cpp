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

    priority_queue<pair<int,int>> q;
    //{distance, node}
    q.push({0, 1});
    d[1] = {0,-1};
    while(!q.empty()){
        pair<int,int> p = q.top();
        int dist = p.first;
        int prev = p.second;
        q.pop();
        for(int i = 0; i < g[prev].size(); i++){
            int val = g[prev][i].first;
            int cost = g[prev][i].second;
            //found shorter path
            if(dist + cost < d[val].first){
                d[val].second = prev;
                d[val].first = dist+cost;
                q.push({dist+cost, val});
            }
        }
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