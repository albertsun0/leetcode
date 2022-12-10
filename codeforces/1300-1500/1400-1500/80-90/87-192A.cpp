#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    
    set<ll> tnums;

    ll max = 1e9+10;

    for(ll i = 1; i*i < max*2; i++){
        tnums.insert((i * (i+1))/2);
    }

    ll n; cin >> n;

    for(auto num:tnums){
        if(tnums.find(n - num) != tnums.end()){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    
    return 0;
}