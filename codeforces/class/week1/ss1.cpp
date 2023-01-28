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
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int main () {
    fio;
    int n,m;
    cin >> n >> m;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        v.pb(a);
    }
    
    int cur = 0;
    int r = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        while(r < n && cur < m){
            cur += v[r];
            r++;
        }
        if(cur == m){
            ans++;
        }
        cur-=v[i];
    }

    cout << ans; 
    
    return 0;
}