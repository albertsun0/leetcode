#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;

    int n; cin >> n;
    int count = 0;
    int diff = 0;
    int one = 0;

    for(int i = 0; i < n; i++){
        int cur; cin >> cur;
        if(cur == 0){
            count++;
        }
        else{
            one++;
            count--;
        }
        if(count < 0){
            count = 0;
        }
        diff = max(count, diff);
    }
    if(one == n){
        cout << one-1;
    }
    else{
        cout << one + diff;
    }
    
    //meow

    return 0;
}