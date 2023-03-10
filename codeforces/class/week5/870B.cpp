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
    int n,k;
    cin >> n >> k;

    int mn = INT_MAX;
    int mx = INT_MIN;
    vector<int> v;
    for(int i =0 ; i < n; i++){
        int a; cin >> a;
        v.pb(a);
        mn = min(a, mn);
        mx = max(mx, a);
    }

    if(k == 1){
        cout << mn;
    }
    else if(k > 2){
        cout << mx;
    }
    else{
        cout << max(v[0], v[v.size() - 1]);
    }

    return 0;
}


/*

0123
 1


*/