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
 
int mx = 0;
int components = 0;
 
int find(int i, vector<int> & parents){
    if(parents[i] == i){
        return i;
    }
    parents[i] = find(parents[i], parents);
    return parents[i];
}
 
void u(int a, int b, vector<int> & parents, vector<int> & sizes){
    int pa = find(a, parents);
    int pb = find(b, parents);
    if(pa == pb){
        return;
    }
    if(sizes[pb] > sizes[pa]){
        swap(pa,pb);
    }
    parents[pb] = pa;
    sizes[pa] += sizes[pb];
    mx = max(mx, sizes[pa]);
    components--;
}
 
int main () {
    fio;
    int n,m; cin >> n >> m;
    components = n;
    vector<int> parents(n,0);

    map<int,set<int>> mp;

    for(int i = 0; i < n; i++){
        parents[i] = i;
    }
 
    vector<int> sizes(n,1);
    
    int zero = 0;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(a == 0){
            zero++;
        }
        for(int j = 0; j < a; j++){
            int b; cin >> b;       
            for(auto val : mp[b]){
                u(i, val, parents, sizes);
            }
            mp[b].insert(i);
        }
    }
    cout << max(components - 1, zero)<< "\n";
    

    return 0;
}
 