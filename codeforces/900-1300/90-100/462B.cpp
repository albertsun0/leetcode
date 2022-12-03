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
    
    int n, k; cin >> n >> k;

    map<char, int> m;

    for(int i = 0; i < n ; i++){
        char c; cin >> c;
        m[c]++;
    }

    vector<int> v;

    for(auto i: m){
        v.push_back(i.second);
    }

    sort(v.begin(), v.end(), greater<int>());

    ll ans = 0;
    int i = 0;
    while(k >= v[i]){
        k-= v[i];
        ans+= v[i] * v[i];
        i++;
    }
    if(k > 0){
        ans+= k *k;
    }

    cout << ans;


    return 0;
}