#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n; cin >> n;
    //try to generate n primes
    int max = 1e6 + 300000;

    int s[max] = {};
    //generate primes using sieve
    for(int i = 2; i < max; i++){
        if(s[i]) continue;
        for(int j = i * 2; j < max; j+= i){
            s[j] = i;
        }
    }

    int count = 0;

    for(int i = 2; i < max; i++){
        if(s[i] == 0){
            if(count == n-1){
                cout << i;
                return 0;
            }
            cout << i << " ";
            count++;
            
        }
    }
    
    return 0;

}