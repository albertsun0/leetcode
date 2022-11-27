#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#define _USE_MATH_DEFINES 
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int r, c, k;
    cin >> r >> c >> k;
    int matrix[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j< c; j++){
            int a; cin >>a;
            matrix[i][j] = a;
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j< c; j++){
            cout <<  matrix[i][j];
        }
        cout << "\n";
    }

    int row = 0; 
    int col = 0;
    int addrow = 0;
    int addcol = 1;

    int ans = 0;

    for(int i = 0; i < r*c; i++){
        //cout << row << " " << col << "\n";
        cout << matrix[row][col] << " ";
        if(i%k == 0){
            ans += matrix[row][col];
        }
        if(matrix[row+addrow][col+addcol] == -1 || col == c-1 || row == r-1 || (col == 0 && row != 0)){
            if(addrow == 1){
                addcol = -1;
                addrow = 0;
            }
            else if(addrow == -1){
                addrow = 0;
                addcol = 1;
            }
            else if(addcol == 1){
                addcol = 0;
                addrow = 1;
            }
            else if(addcol == -1){
                addcol = 0;
                addrow = -1;
            }
            cout << "turn" << addrow << " " << addcol << "\n";
        }
        matrix[row][col] = -1;
        row += addrow;
        col += addcol;
    }

   
    cout << ans;

    return 0;
}