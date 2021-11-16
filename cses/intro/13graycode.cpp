#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;
#define pb push_back
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n; cin >> n;

    ll total = 1 << n;
    ll current = 0;
    for(int i = 0; i < total; i++){
        if(current%2 == 0){
            current++;
        }
        else{
            current-1;
        }

        string bin = bitset<16>(i).to_string();
        cout << bin.substr(16-n) << "\n";
    }
    return 0;
}