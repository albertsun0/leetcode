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
    for(int i = 0; i < n; i++){
        parents[i] = i;
    }

    vector<int> sizes(n,1);

    for(int i = 0; i < m; i++){
        int a,b; cin >> a >> b;
        a--; b--;
        u(a, b, parents, sizes);
        cout << components << " " << mx << "\n";
    }
    return 0;
}

//1 2 4 8 16 
