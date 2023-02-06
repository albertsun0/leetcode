#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long
#include <algorithm>
#include <queue>
#include <set>
#include <limits.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

struct edge {
    int a, b, w;
};

int main () {
    fio;
    int n; int m; int q; cin >> n >> m >> q;

    vector<vector<ll>> g (n, vector<ll> (n,LLONG_MAX));

    for(int i = 0; i < n; i++){
        g[i][i] = 0;
    }

    for(int i = 0 ; i < m; i++){
        ll a, b, w;
        cin >> a >> b >> w;
        a--; b--;
        g[a][b] = min(w, g[a][b]);
        g[b][a] = min(w, g[a][b]);
    }

    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if (g[i][k] < LLONG_MAX && g[k][j] < LLONG_MAX)
                    g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
            }
        }
    }

    for(int i = 0; i < q; i++){
        int a, b; cin >> a >> b;
        a--; b--;
        if(g[a][b] == LLONG_MAX){
            cout << "-1" << "\n";
        }
        else{
            cout << g[a][b] << "\n"; 
        }
    }


    return 0;
}