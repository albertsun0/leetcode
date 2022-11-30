#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <limits.h>

using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n; cin >> n;
    vector<pair<int,int>> cards;
    for(int i = 0; i < n*2; i++){
        int a; cin >> a;
        cards.push_back({a,i});
    }
    //meow

    sort(cards.begin(), cards.end());

    for(int i = 0; i< cards.size(); i+=2){
        if(cards[i].first != cards[i+1].first){
            cout << "-1";
            return 0;
        }
        cout << cards[i].second+1 << " "<< cards[i+1].second+1 << "\n";
    }
    return 0;
}