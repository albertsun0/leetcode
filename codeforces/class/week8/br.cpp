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

int mod = 1e9+7;


int f (int c, vector<int> & parents){
    if(parents[c] == c){
        return c;
    }
    
    parents[c] = f(parents[c], parents);
    return parents[c];
}

void u (int a, int b, vector<int> & parents, vector<int> & rank){
    int pa = f(a, parents);
    int pb = f(b, parents);

    if(pa == pb){
        return;
    }
    if(rank[pb] > rank[pa]){
        swap(pa,pb);
    }
    parents[pb] = pa;
    rank[pa]++;
}

int main () {
    fio;
    int n,m; cin >> n >> m;
    //roads from 1 - n
    vector<int> parents(n, 0);
    for(int i = 0; i < n; i++){
        parents[i] = i;
    }
    vector<int> rank (n, 1);

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        u(a,b, parents, rank);
    }

    set<int> s;
    // for(auto i: parents){
    //     cout << i << "\n";
    // }
    for(int i =0; i < n; i++){
        int temp = f(i, parents);
        // s.insert(temp);
    }
    //
    //connect all parents in s together with size - 1 bridges
    cout << s.size() - 1<< "\n";
    if(s.size() - 1 == 0){
        return 0;
    }
    vector<int> temp;
    copy(s.begin(), s.end(), temp.begin());
    for(int i = 1; i < temp.size(); i++){
        cout << temp[i]+1 << " " << temp[i-1]+1 << "\n";
    }

    return 0;
}


/*

0123
 1


*/