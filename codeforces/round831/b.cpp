#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll sol(){
    int n; cin >> n;

    vector<pair<int,int>> v;
    ll wsum = 0;

    int hmax = 0;

    for(int i = 0; i < n; i++){
        int h; int w;
        cin >> h >> w;
        if(h > w){
            wsum += w;
            hmax = max(hmax, h);
        }
        else{
            wsum += h;
            hmax = max(hmax, w);
        }
    }
    return wsum * 2 + hmax * 2;
}

int main () {
    fio;
    int n; cin >> n;
    for(int i = 0; i< n; i++){
        cout << sol() << "\n";
    }
    return 0;
}