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
<<<<<<< HEAD
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#include <limits.h>
#include <cmath>
=======
#include <limits.h>
#include <stack>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
>>>>>>> c518aa7a741ef11e7c4f0637a4f96d0007ca81bd


int main () {
    fio;
<<<<<<< HEAD
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        v.pb(a);
    }
    vector<int> pos;
    for(int i = 0; i < n; i++){
        pos.pb(i);
    }

    for(int i = 0; i < 1000; i++){
        int p= pos[0];
        int diff = false;
        for(int a = 1; a < pos.size(); a++){
            if(pos[a] != p){
                diff = true;
                break;
            }
        }
        if(!diff){
            cout << i << " " << p;
            return 0;
        }
        for(int a = 0; a < pos.size(); a++){
            pos[a] = (pos[a] + v[a]) % n;
        }
    }
    cout << "-1";
}

/*

3

1 2 3




*/
=======
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
>>>>>>> c518aa7a741ef11e7c4f0637a4f96d0007ca81bd
