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

int main () {
    fio;
    int n; int m; cin >> n >> m;

    map<int, vector<pair<int,int>>> g;
    
    for(int i = 0; i < m; i++){
        int a, b, w;
        cin >> a >> b >> w;
        g[a].push_back({b,w});
        //g[b].push_back({a,w});
    }

    vector<ll> d;
    for(int i = 0; i< n+1; i++){
        d.push_back(LONG_LONG_MAX);
    }
    // {distance (length of shortest path to node i), prev}
    vector<bool> visited(n+1, 0);

    priority_queue<pll, vector<pll>, greater<pll>> q;
    //{distance, node}
    q.push({0, 1});
    d[1] = 0;
    while(!q.empty()){
        pair<ll,ll> p = q.top();
        ll dist = p.first;
        ll prev = p.second;
        q.pop();
        if(visited[prev]){
            continue;
        }
        d[prev] = dist;
        visited[prev] = true;
        for(int i = 0; i < g[prev].size(); i++){
            ll val = g[prev][i].first;
            ll cost = g[prev][i].second;
            //found shorter path
            if(!visited[val]){
                q.push({dist+cost, val});
            }
        }
    }

    for(int i = 1; i <= n; i++){
        cout << d[i] << " ";
    }
    
    

    return 0;
}