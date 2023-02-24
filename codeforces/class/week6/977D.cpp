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

bool dfs(vector<ll> & v, int prev, vector<ll> nums){
    ll temp = v[prev];
    v[prev] = -1;
    nums.push_back(temp);
    if(nums.size() == v.size()){
        //base case
        for(int i = 0; i < nums.size(); i++){
            cout << nums[i] << " ";
        }
        return true;
    }
    for(int i = 0; i < v.size(); i++){
        if(temp %3 == 0 && v[i] == temp/3){
            if(dfs(v, i, nums)){
                return true;
            }
        }
        else if(v[i] == temp * 2){
            if(dfs(v, i, nums)){
                return true;
            }
        }
    }
    v[prev] = 1;
    return false;
}
 
int main () {
    fio;
    int n; cin >> n;
    vector<ll> v;
    for(int i = 0; i < n; i++){
        ll a; cin >> a;
        v.pb(a);
    }

    for(int i = 0; i < n; i++){
        vector<ll> copy = v;
        vector<ll> ans;
        if(dfs(copy, i, ans)){
            break;
        }
    }
 
    return 0;
}