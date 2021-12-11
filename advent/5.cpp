#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <string>
#include <regex>
using namespace std;
#define pb push_back
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    string s; 
    int count = 0;
    int m[1000][1000] {};
    for(int i = 0; i<500; i++){
        int x1;
        int x2;
        int y1;
        int y2;
        string t;
        cin >> x1; cin >>t; cin>> y1;
        cin >> t;
        cin >> x2; cin >>t; cin>>y2;
        cout << x1 << " " << y1;
    }
   
    cout << count;
    return 0;
}