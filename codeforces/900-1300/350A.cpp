#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int main () {
    fio;

    int n; cin >> n;
    int m; cin >> m;

    vector<int> pass;
    vector<int> fail;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        pass.pb(a);
    }
    for(int i = 0; i < m; i++){
        int a; cin >> a;
        fail.pb(a);
    }
    sort(pass.begin(), pass.end());
    sort(fail.begin(), fail.end());

    if(fail[0] <= pass[n-1]){
        cout << "-1";
        return 0;
    }
    if(pass[n-1] < pass[0] * 2){
        if(pass[0] * 2 < fail[0]){
            cout << pass[0] * 2;
            return 0;
        }
        else{
            cout << "-1";
            return 0;
        }
    }
    cout << pass[n-1];

    return 0;
}