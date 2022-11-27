#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


bool valid(int r, int c){
    return (r >= 0 && r < 3 && c >= 0 && c < 3);
}

int main () {
    fio;

    int m[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> m[i][j];
        }
    }

    int ans[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int count = m[i][j] + 1;
            if(valid(i+1,j)){
                count += m[i+1][j];
            }
            if(valid(i-1,j)){
                count += m[i-1][j];
            }
            if(valid(i,j+1)){
                count += m[i][j+1];
            }
            if(valid(i,j-1)){
                count += m[i][j-1];
            }
            ans[i][j] = count % 2;
        }
    }

    for(int i = 0 ; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << ans[i][j];
        }
        cout << "\n";
    }
    return 0;
}