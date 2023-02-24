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
    int n, m;
    cin >> n >> m;

    vector<int> f;
    vector<int> t;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        f.pb(a);
    }

    for(int i = 0; i < m; i++){
        int a; cin >> a;
        t.pb(a);
    }

    sort(f.begin(), f.end());
    sort(t.begin(), t.end());

    int ans = 0;
    int pf = 0;
    int pt = 0;

    while(pf < f.size() && pt < t.size()){
        if(f[pf] > t[pt]){
            pt++;
        }
        else{
            pf++;
            pt++;
            ans ++;
        }
    }

    cout << ans;
    return 0;
}