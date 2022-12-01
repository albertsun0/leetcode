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
    int m; cin >> m;

    vector<int> v;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        v.push_back(a);
    }

    set<int> s;
    vector<int> suffix (v.size() , 0);
    for(int i = v.size() - 1; i >= 0; i--){
        s.insert(v[i]);
        suffix[i] = s.size();
    }

    for(int i = 0; i < m ;i++){
        int a; cin >> a;
        cout << suffix[a-1] << "\n";
    }
    return 0;
}