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
    int n; int s;
    cin >> n >> s;

    vector<int> v;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        v.pb(a);
    }

    sort(v.begin(), v.end());

    int count = 0;
    for(int i =0 ; i < v.size() + 1; i++){
        if(count > s){
            cout << i-1;
            return 0;
        }
        if(i == v.size()){
            cout << i;
            return 0;
        }
        count += v[i];
    }

    return 0;

}