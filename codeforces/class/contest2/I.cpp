
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
#include <cmath>
#include <unordered_map>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n; int m;
    cin >> n >> m;
    vector<pair<int,int>> edges;
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        edges.pb({a,b});
    }
    
    int ans = 0;

    for(int i = 0; i < n; i++){
        vector<ll> d(n+1, INT_MAX);

        d[i+1] = 0;
        
        for(int c = 0; c < n-1; c++){
            bool any = false;
            for(auto e: edges){
                int a = e.first;
                int b = e.second;
                if(d[a] < INT_MAX){
                    if(d[b] > d[a]){
                        d[b] = d[a];
                        any = true;
                    }
                }
                
            }
            if(!any){
                break;
            }
        }

        // for(auto v: d){
        //     cout << v << " ";
        // }
        // cout << "\n";

        int count = 0;
        for(int c = 0; c < n+1; c++){
            if(d[c] < INT_MAX){
                count++;
            }
        }
        ans = max(ans, count);
    }

    cout << ans;

    return 0;
}

