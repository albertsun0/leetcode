#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

//https://codeforces.com/problemset/problem/1747/B

void sol(){
    int n; cin >> n;

    if(n % 2 == 0){
        cout << n/2 << "\n";
    }
    else{
        cout << n/2 + 1 << "\n";
    }
    
}

int main () {
    fio;
    int n; cin >> n;
    for(int i = 0; i< n; i++){
        sol();
    }
    return 0;
}