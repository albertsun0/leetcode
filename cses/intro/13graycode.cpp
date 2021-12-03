#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;
#define pb push_back
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void recurse(string s){

}

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

        // string bin = bitset<16>(i).to_string();
        // cout << bin.substr(16-n) << "\n";
    }
    return 0;
}

/*
0000
0001
0011
0010


0111
0110
0100
0101

1101
1111
1110
1100
1000
1001
1011
1010


0000
0001
0011
0010
0110
0111
0101
0100
1100
1101
1111
1110
1010
1011    
1001
1000


0
1
3
2
6
7
5
4
12



*/