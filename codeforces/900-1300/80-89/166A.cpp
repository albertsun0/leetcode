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
    int n, r; cin >> n >> r;
    vector<pair<int,int>> v;

    for(int i = 0; i < n ;i++){
        int a,b; cin >> a >> b;
        v.pb({a,b});
    }
    sort(v.begin(), v.end(), greater<pair<int,int>>());

    // for(auto i: v){
    //     cout << i.first << " ";
    // }

    pair<int,int> rank = v[r-1];

    int count = 1;

    for(int i = r-1; i <n ; i++){
        
    }

    cout << "YES";
    return 0;
}