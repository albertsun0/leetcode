#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n; int k;
    string s;
    
    int valid[26] = {};
    cin >> n >> k;
    cin >> s;
    for(int i = 0; i<k; i++){
        char c;
        cin >> c;
        valid[c - 'a'] = 1;
    }
    ll ans = 0;
    ll temp  = 0;
    for(int i = 0; i<s.length(); i++){
        //cout << temp << "\n";
        if(valid[s[i] - 'a']){
            temp++;
        }
        else{
            ans += temp * (temp+1) / 2;
            temp = 0;
        }
    }
    ans += temp* (temp+1) / 2;
    cout << ans << "\n";
    
    return 0;
}

//state - what information you are storing answer for
//transition - f(n) = f(n-1) + f(n-2)
//base case - f(0) = 0, f(1) = 1