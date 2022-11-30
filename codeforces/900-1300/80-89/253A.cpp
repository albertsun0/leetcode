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
    int n; int m;
    cin >> n >> m;

    bool boy = true;
    if(n < m){
        boy = false;
    }

    while(n > 0 || m > 0){
        if(n <= 0){
            cout << "G";
            m--;
            continue;
        }
        if(m <= 0){
            cout << "B";
            n--;
            continue;
        }
        if(boy){
            cout << "B";
            n--;
            boy = false;
        }
        else{
            cout << "G";
            m--;
            boy = true;
        }
    }
    return 0;
}