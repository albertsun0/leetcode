#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
#define pb push_back
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n;
    unordered_set <int> s;
    int max = 0;
    while(cin >> n ){
        if(n >= max){
            max = n;
        }
        s.insert(n);
    }
    for(int i = 1; i<=max; i++){
        if(s.find(i) == s.end()){
            cout << i;
            return 0;
        }
    }
    if(s.find(1) == s.end()){
        cout << 1;
        return 0;
    }
    
    cout << max+1;
    return 0;
}