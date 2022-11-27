#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#define _USE_MATH_DEFINES 
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n;
    cin >> n;

    vector<int> nums;
    for(int i = 0; i<n; i++){
        int a; cin >> a;
        nums.pb(a);
    }
    sort(nums.begin(), nums.end());
    // for(auto i:nums){
    //     cout << i << " ";
    // }
    ll ans = 0;
    for(int i = 0; i<n; i+=2){
        ans+= nums[i];
    }
    cout << ans;

    return 0;
    
}