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