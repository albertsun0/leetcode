#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <limits.h>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;

    int n; cin >> n;
    int m; cin >> m;
    
    int mult; cin >> mult;

    vector<int> nums;
    for(int i = 0; i < n *m; i++){
        int a; cin >> a;
        nums.pb(a);
    }
    
    int start = nums[0];
    int ans = INT_MAX;
    for(int i = 1; i < n * m; i++){
        if(abs(nums[i] - start) % mult != 0){
            cout << "-1";
            return 0;
        }
    }

    //all numbers are linear away, now need to find middle element to collapse to
    //brute force n^2

    for(int i = 0; i < n *m; i++){
        int temp = 0;
        for(int j = 0; j < n *m; j++){
            if(i == j){
                continue;
            }
            temp += abs(nums[j] - nums[i])/mult;
        }
        ans = min(temp, ans);
    }
    cout << ans;

    return 0;
}