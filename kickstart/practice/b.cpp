#include <iostream>
#include <vector>
#include <algorithm>

#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll sol() {
    int len; int n;
    cin >> len >> n;
    string s;
    cin >> s;
    int ans = 0;
    
    vector<vector<int>> v;
    vector<int> temp(26,0);
    v.push_back(temp);
    for(int i = 0; i< len; i++){
        vector<int> a(v[i]);
        a[s[i]- 'A']++;
        v.push_back(a);
    }

    // for(int i = 0; i<v.size(); i++){
    //     for(int a = 0; a< 26; a++){
    //         cout << v[i][a] << " ";
    //     }
    //     cout << "\n";
    // }

    for(int i = 0; i<n; i++){
        int l; int r;
        cin >> l >> r;
        
        int onecount = 0;

        for(int a = 0; a<26; a++){
            if((v[r][a] - v[l-1][a]) % 2 != 0){
                onecount++;
            }
        }

        if(onecount <= 1){
            ans++;
        }
        
    }

    // for(int i = 0; i<n; i++){
    //     int l; int r;
    //     cin >> l >> r;

    //     vector<int> v (26,0);
    //     for(int a = l-1; a < r; a++){
    //         v[s[a]- 'A']++;
    //     }
    //     // for(auto i: v){
    //     //     cout << i << " ";
    //     // }
    //     // cout << "\n";
    //     int onecount = 0;

    //     for(int a = 0; a<26; a++){
    //         if(v[a] % 2 != 0){
    //             onecount++;
    //         }
    //     }

    //     if(onecount <= 1){
    //         ans++;
    //     }
    // }

    return ans;
}

int main () {
    fio;
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        cout << "CASE #" << i+1 << ": "<< sol() << "\n";
    }
    return 0;
}