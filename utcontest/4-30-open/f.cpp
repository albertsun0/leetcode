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

    string s;
    cin >> s;

    vector<int> leftmax (n+1,0);
    int tempcount = 0;
    int tempmax = 0;
    vector<int> rightmax;
    rightmax.pb(0);
    for(int i = 0; i < n; i++){
        if(s[i] == 'R'){
            tempcount+=1;
        }
        if(s[i] == 'C'){
            tempcount -=1;
        }
        if(s[i] == 'S'){
            tempcount -=2;
        }
        tempmax = max(tempcount, tempmax);
        leftmax[i+1] = tempmax;
    }
    tempcount = 0; tempmax = 0;
    for(int i = n-1; i >= 0; i--){
        if(s[i] == 'R'){
            tempcount-=1;
        }
        if(s[i] == 'C'){
            tempcount +=1;
        }
        if(s[i] == 'S'){
            tempcount -=2;
        }
        tempmax = max(tempcount, tempmax);
        rightmax.push_back(tempmax);
    }
    // for(auto i: rightmax){
    //     cout << i << " ";
    // }
    // cout << "\n";
    // for(auto i: leftmax){
    //     cout << i << " ";
    // }
    // cout << "\n";

    int ans = 0;
    for(int i = 0; i<n+1; i++){
        ans = max(ans, leftmax[i] + rightmax[n-i]);
    }
    cout << ans;

    return 0;
}