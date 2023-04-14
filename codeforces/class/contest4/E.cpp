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

int ans = INT_MAX;
int n;
void r(vector<vector<int>> &g, int cur, int count, int cost){
    if(count == n-1){
        cost += g[cur][0];
        ans = min(ans, cost);
    }    
    for(int i = 1; i < n; i++){
        if(g[cur][i] != 0){
            int temp = g[cur][i];
            g[cur][i] = 0;
            g[i][cur] = 0;
            r(g, i, count + 1, cost + temp);
            g[cur][i] = temp;
            g[i][cur] = temp;
        }
    }
}


int main () {
    fio;
    cin >> n;
    vector<vector<int>> g;

    for(int i = 0; i < n; i++){
        vector<int> temp;
        for(int j = 0; j < n; j++){
            int a; cin >> a;
            temp.pb(a);
        }
        g.pb(temp);
    }
    r(g, 0, 0, 0);
    cout << ans << "\n";
    return 0;
}

//0 1 2
//1 1
//2