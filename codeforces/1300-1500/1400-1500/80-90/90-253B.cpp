//https://codeforces.com/problemset/problem/253/B
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
    int n; cin >> n;
    vector<int> v;

    for(int i = 0; i < n ; i++){
        int a; cin >> a;
        v.pb(a);
    }

    sort(v.begin(), v.end());

    if(v[0] * 2 <= v[v.size() - 1]){
        cout << 0;
        return 0;
    }

    

    return 0;
  
}