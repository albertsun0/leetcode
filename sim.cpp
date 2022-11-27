#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool escape(){
    int x = 3;
    int y= 3;
    for(int i = 0; i< 4; i++){
        if(rand() % 100 > 50){
            x += rand() % 100 > 50 ? 1 : -1;
        }
        else{
            y += rand() % 100 > 50 ? 1 : -1;
        }
        if(x <= 1 || x >= 5 || y <= 1 || y >= 5 ){
            return false;
        }
    }

    return true;
}

int main () {
    fio;
    int ans = 0;
    int INT_MAX = 99999999;
    for(int i = 0; i < INT_MAX; i++){
        if(escape()){
            ans++;
        }
    }
    double temp = ans * 1.0 / INT_MAX;
    cout << temp;
    return 0;
}