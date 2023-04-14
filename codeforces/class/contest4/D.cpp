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
#include <cmath>

int main () {
    fio;
    int n, m, q; cin >> n >> m >> q;
    
    vector<vector<int>> g(1001, vector<int>(1001,0)); 

    for(int i = 0; i < n; i++){
        int a,b; cin >> a >> b;
        g[a][b] = 1;
    }

    for(int i = 0; i < m; i++){
        int a,b; cin >> a >> b;
        // g[a][b] = 1;
        for(int r = a-1; r < a+1; r++){
            for(int c = b-1; c < b+1; c++){
                if(r >= 0 && r < g.size() && c >= 0 && c < g.size()){
                    g[r][c] = 0;
                }
            }
        }
    }

    for(int i = 0; i < q; i++){
        int a,b; cin >> a >> b;
        int a1, b1; cin >> a1 >> b1;
        int ans = 0;
        for(int r = a; r < a1; r++){
            for(int c = b; c < b1; c++){
               ans += g[r][c];
            }
        }
        cout << ans << "\n";
    }

    return 0;
}

//0 1 2
//1 1
//2


/*
    1 5 7 3 8 2 1 4


    2 3 5 2 4 1 1 1


*/