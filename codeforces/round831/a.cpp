#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int sol(){
    int n; cin >> n;
    if(n % 2 == 0){
        return 2;
    }
    return 3;
}

int main () {
    fio;
    int n; cin >> n;
    for(int i = 0; i< n; i++){
        cout << sol() << "\n";
    }
    return 0;
}