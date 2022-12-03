#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int main () {
    fio;
    int n;
    cin >> n;
    
    vector<int> dp (n+1, 0);
    vector<int> nums;

    for(int i = 0; i <3; i++){
        int a; cin >>a;
        nums.pb(a);
    }
    
    dp[0] = 0;
    for(int a = 0; a < 3; a++){
        int c = nums[a];
        for(int i = c; i < n+1; i++){
            if(i == c){
                dp[i] = 1;
            }
            if(dp[i]> 0){
                if(i+c <= n){
                    dp[i+c] = max(dp[i+c], dp[i] + 1);
                }
            }    
        }
    }
    //3164 42 430 1309
    for(auto i: dp){
        cout << i << " ";
    }
    cout << dp[n];

    return 0;
}