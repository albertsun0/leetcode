#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int main () {
    fio;
    int x = 0;
    int y = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int a; 
            cin >> a;
            if(a == 1){
                x = i;
                y = j;
            }
        }
    }
    cout << abs(x-2) + abs(y-2);
    return 0;
}