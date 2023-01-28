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
#include <limits.h>
#include <stack>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int main () {
    fio;
    int n; cin >> n;
    if(n < 1){
        cout << 0;
        return 0;
    }
    if(n == 1){
        cout << 1;
        return 0;
    }
    int ans = 1;
    while(ans <= n){
        ans = ans * 2;
    }
    cout << ans/2;
    return 0;
}