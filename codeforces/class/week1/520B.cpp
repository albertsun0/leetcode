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


int main () {
    fio;
    int n; int m; cin >> n >> m;
    
    //travel from n to m
    //operations:   n = n *2 or n = n - 1
    //if n < 0 or n > m*2 stop

    queue<pair<int,int>> q;
    int ans = 0;
    q.push({n, 0});
    set<int> visited;
    while(!q.empty()){
        pair<int,int> f = q.front();
        q.pop();
        if(f.first == m){
            cout << f.second;
            return 0;
        }
        if(visited.find(f.first) != visited.end()){
            continue;
        }
        visited.insert(f.first);
        if(f.first <= 0 || f.first > 1e4+1){
            continue;
        }
        q.push({f.first * 2, f.second + 1});
        q.push({f.first - 1, f.second + 1});
    }

    return 0;
}