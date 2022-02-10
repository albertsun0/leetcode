#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n; cin >> n;
    vector<int> v(n,0);
    vector<int> t(n,0);
    for(int i = 0; i<n; i++){
        int a; cin >> a;
        v[i] = a;
        t[i] = a;
    }

    sort(t.begin(), t.end());

    int i = n-1;
    int i2 = 0;
    int ans = 0;
    while(i >= 0){
        set<int> curr;
        for(int a = 0; a < n; a++){
            if(v[a] == t[i] && curr.find(v[a]) == curr.end()){
                curr.insert(v[a]);
                v[a] = -1;
                i--;
            }
        }
        ans++;
    }
    

    cout << ans;

    return 0;
}