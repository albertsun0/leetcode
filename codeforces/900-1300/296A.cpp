#include <iostream>
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

    map<int,int> m;
    int maxcount = 0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        m[a]++;
        maxcount = max(maxcount, m[a]);
    }
    //cout << maxcount;
    if(n % 2 == 0){
        if(maxcount > n/2){
            cout << "NO";
            return 0;
        }
        cout << "YES";
    }
    else{
        if(maxcount > n/2 + 1){
            cout << "NO";
            return 0;
        }
        cout << "YES";
    }   
    return 0;
}