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
    int k; cin >> k;

    vector<int> v;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        v.push_back(a);
    }
    
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += v[i];
    }

    int minv = sum;
    int mini = 0;

    for(int i = k; i < n; i++){
        sum += v[i];
        sum -= v[i-k];
        if(sum < minv){
            minv = sum;
            mini = i - (k-1);
        }
        
    }
    cout << mini + 1;
    return 0;
}