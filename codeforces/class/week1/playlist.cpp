#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long
#include <algorithm>
#include <queue>
#include <set>
#include <map>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int main () {
    fio;
    int n; cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        v.pb(a);
    }

    map<int,int> m;    

    int ans = 1;
    int l = 0;
    for(int i = 0; i < n; i++){
        if(m.find(v[i]) != m.end()){
            if(m[v[i]] >= l){
                l = m[v[i]]+1;
            }
        }
        m[v[i]] = i;
        ans = max(ans, i - l + 1); 
    }
    
    cout << ans;

    return 0;
}