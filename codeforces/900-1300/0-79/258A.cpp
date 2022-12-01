#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    string s;
    cin >> s;

    for(int i = 0 ; i < s.length(); i++){
        if(s[i] == '0'){
            s.erase(i,1);
            cout << s;
            return 0;
        }
    }
    s.erase(0,1);
    cout << s;
    return 0;

}