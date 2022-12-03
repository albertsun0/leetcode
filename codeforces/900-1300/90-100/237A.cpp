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

    map<int, int> m;
    int ans = 1;
    for(int i = 0; i < n; i++){
        int h, min; cin >> h >> min;
        int v = h*100 + min;
        m[v]++;
        ans = max(ans, m[v]);
    }

    cout << ans;

    return 0;
}