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
    vector<int> v;
    for(int i= 0; i < n; i++){
        int a; cin >> a;
        v.push_back(a);
    }
    vector<ll> prefix;
    prefix.pb(0);
    vector<ll> sortedprefix;
    sortedprefix.pb(0);
    ll sum = 0;
    for(int i =0; i< n; i++){
        sum+= v[i];
        prefix.push_back(sum);
    }

    sum = 0;
    sort(v.begin(),v.end());
    for(int i =0; i< n; i++){
        sum+= v[i];
        sortedprefix.push_back(sum);
    }

    int q; cin >> q;

    for(int i = 0; i < q; i++){
        int t; cin >> t;
        int l, r; cin >> l >> r;
        l--;
        if(t == 1){
            cout << prefix[r] - prefix[l] << "\n";
        }
        else{
            cout << sortedprefix[r] - sortedprefix[l] << "\n";
        }
    }
    return 0;
}