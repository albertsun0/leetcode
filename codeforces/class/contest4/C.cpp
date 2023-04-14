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
#include <limits.h>
#include <cmath>

int main () {
    fio;
    int n; cin >> n;
    
    vector<int> v1;
    vector<int> v2;

    ll sum = 0;
    int max1 = 0;
    int max2 = 0;
    
    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for(int i = 0; i < n; i++){
        int a; cin>> a;
        sum+=a;
        v1.pb(a);
        max1 = max(max1,a);
        min1 = min(min1,a);
    }

    for(int i = 0; i < n; i++){
        int a; cin>> a;
        sum +=a;
        v2.pb(a);
        max2 = max(max2, a);
        min2 = min(min2, a);
    }

    if(min2 < max1){
        cout << "-1";
        return 0;
    }

    sum /= (n*2);

    if(sum < max1 || sum > min2){
        sum = max1;
    }
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += abs(v1[i] - sum);
        ans += abs(v2[i] - sum);
    }
    cout << ans;

    return 0;
}
