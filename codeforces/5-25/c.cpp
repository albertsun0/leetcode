#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void sol(){
    vector<ll> v;
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        ll a; cin >> a;
        v.push_back(a);
    }    
    if(n % 2 == 1){
        cout << "NO" << "\n";
        return;
    }
    sort(v.begin(), v.end());
    if(v[n/2] > v[n/2-1]){
        vector<ll> ans;
        for(int i = 0; i < n/2; i++){
            ans.pb(v[i]);
            ans.pb(v[i+n/2]);
        }
        cout << "YES" << "\n";
        for(auto i: ans){
            cout << i << " ";
        }
        cout << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
    
    //verify ans
    
    //0 1 2 3 4 5
}

int main () {
    fio;
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        sol();
    }
    return 0;
}

/*
4
3
1 1 2
4
1 9 8 4
4
2 0 2 2
6
1 1 1 11 111 1111
*/

/*
10 10 10 10 11 11 11 11


1 2 3 4 5

1 3 2 5 4
*/


