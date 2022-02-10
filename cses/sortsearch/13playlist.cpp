#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n; cin >> n;
    vector<int> v(n,0);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    // int dp[n];
    // dp[0] = 1;
    // vector<int> a(n,0);
    // a[0] = v[0]
    // for(int i = 1; i < n; i++){
    //     if(v[i] in a){
    //         dp[i] = dp[i - 1] + 1
    //     }
    //     else {
    //         dp[i] = 1
            
    //     }
    // }

    int l = 0;
    map<int, int> m;
    int mx = 0;

    for(int i = 0; i<n; i++){
        // cout << v[i] << " "  << l << "\n";
        // cout << "map" << "\n";
        // for(auto i: m){
        //     cout << i.first << " " << i.second << "\n";
        // }

        if(m.find(v[i]) != m.end() && m[v[i]] >= l){
            l = m[v[i]];
            m[v[i]] = i;
        } 
        else{
            m.insert({v[i],i});
        }
        //m.insert({v[i],i});
        mx = max(mx,i-l);
    }
    cout << mx;

    return 0;
}