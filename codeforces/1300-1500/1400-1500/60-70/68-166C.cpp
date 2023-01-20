#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <limits.h>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n; cin >> n;
    int m; cin >> m;

    vector<int> v;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        v.pb(a);
    }

    sort(v.begin(), v.end());
    for(auto i:v){
        cout << i << " ";
    }
    if(m < v[0]){
        cout << n-1;
        return 0;
    }
    if(m > v[n-1]){
        cout << n + 1;
        return 0;
    }

    int ans = INT_MAX;
    int mix = (n+1)/2 - 1;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == m){
            //for every valid i, calculate ans, return min
            int temp = abs(mix - i);
            if(mix % 2 == 0)
            ans = min(temp, ans);
        }
    }

    if(ans == INT_MAX){
        //m not in v, so we need to add it
        v.pb(m);
        sort(v.begin(), v.end());
        mix = (n+2)/2 - 1;
        for(int i = 0; i < v.size(); i++){
            if(v[i] == m){
                //for every valid i, calculate ans, return min
                int temp = abs(mix - i);
                ans = min(temp, ans);
            }
        }
        ans ++;
    }

    cout << ans;
    return 0;
}