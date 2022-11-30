#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <limits.h>
#include <unordered_set>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n;
    cin >> n;

    int t = 0;
    int b = 0;
    
    for(int i = 0; i < n; i++){
        int l, r;
        cin >> l >> r;
        t += l;
        b += r;
        //right adds diff
        //left subtracts diff
    }


    cout << count;

    return 0;
}