#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long
#include <algorithm>
#include <queue>
#include <set>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

struct edge {
    int a, b, w;
};

int main () {
    fio;
    int n; int m; cin >> n >> m;
    vector<edge> edges;

    for(int i = 0; i < m; i++){
        int a, b, w;
        cin >> a >> b >> w;
        edge e = {a,b,w};
        edges.pb(e);
    }

    vector<ll> d(n+1, 0);
    vector<int> p(n+1, -1);

    int x;
    for(int i = 0; i < n; i++){
        x = -1;
        for(auto e: edges){
            if(d[e.a] + e.w < d[e.b]){
                d[e.b] = d[e.a] + e.w;
                p[e.b] = e.a;
                x = e.b;
            }
        }
    }

    // on nth iteration, if value is changed, then there is a neg cycle that incldues x
    if(x == -1){
        cout << "NO";
        return 0;
    }
    //neg cycle with x in it

    vector<int> cycle;
    for (int i = 0; i < n; ++i)
        x = p[x];
    int temp = x;
    cycle.pb(x);
    x = p[x];
    while(x != temp){
        cycle.pb(x);
        x = p[x];
    }
    reverse(cycle.begin(), cycle.end());
    cout << "YES" << "\n";
    for(auto i: cycle){
        cout << i << " ";
    }

    cout << cycle[0];

    return 0;
}