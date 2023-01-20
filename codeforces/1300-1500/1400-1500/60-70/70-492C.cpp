#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <limits.h>
using namespace std;
#define pb push_back
#define ll long long
#define ull unsigned long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n, r, a;
    cin >> n >> r >> a;

    ll required = n * a; //you need this many points

    vector<pair<int,int>> v;

    for(int i =0 ; i < n; i++){
        int x,y;
        cin >> x >> y;
        required-=x;
        v.pb({y,x});
    }
    
    sort(v.begin(), v.end());
    ll ans = 0;
    int index = 0;
    while(required > 0){
        pair<int,int> cur = v[index];
        while(required > 0 && cur.second < r){
            cur.second++;
            ans += cur.first;
            required--;
        }
        index++;
    }
    cout << ans;

}