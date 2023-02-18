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
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#include <limits.h>
// bool dfs(int a, int b, map<int, vector<int>> g, set<int> & vis){
//     // cout << "Dfs" << a << " " << b << "\n";
//     if(a == b){
//         return true;
//     }
//     if(vis.find(a) != vis.end()){
//         return false;
//     }
//     vis.insert(a);
//     for(auto i : g[a]){
//         if(dfs(i, b, g, vis)){
//             vis.erase(a);
//             return true;
//         }
//     }
//     vis.erase(a);
//     return false;
// }

int main () {
    fio;
    int n; cin >> n;
    vector<pair<int,int>> intervals;
    vector<pair<int,int>> edges;
    set<int> vis;
    int index = 0;
    for(int i = 0; i < n; i++){
        int t, a, b; cin >> t >> a >> b;

        if(t == 1){
            for(int x = 0; x < intervals.size(); x++){
                if(
                (intervals[x].first < a && a < intervals[x].second)
                ||
                (intervals[x].first < b && b < intervals[x].second)
                ){
                    //cout << a << " " << b << "," << intervals[x].first << " " << intervals[x].second << "\n";
                    edges.pb({index+1, x+1});
                }

                if(
                (a < intervals[x].first && intervals[x].first < b)
                ||
                (a < intervals[x].second && intervals[x].second < b)
                ){
                    // cout << "yes??" << "\n";
                    edges.pb({x+1, index+1});
                }
            }
            intervals.pb({a,b});
            index++;
        }
        else{
            //find a to b
            // for(auto e: edges){
            //     cout << e.first << " " << e.second << "\n";
            // }
            vector<ll> d (intervals.size()+1, INT_MAX);
            d[a] = 0;
            for(int t = 0; t < intervals.size(); t++){
                for(auto x: edges){
                    d[x.second] = min(d[x.second], d[x.first] + 1);
                }
            }
            // for(auto v : d){
            //     cout << v << " ";
            // }
            // cout << "\n";
            if(d[b] < INT_MAX){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
    }

    return 0;
}

/*
8
1 1208 1583
1 -258 729
1 -409 1201
1 194 1938
1 -958 1575
1 -1466 1752
2 1 2
2 1 2


6
1 1 5
1 5 11
2 1 2
1 2 9
2 1 2
2 1 2

3
1 1 5
1 5 11
2 1 2
*/