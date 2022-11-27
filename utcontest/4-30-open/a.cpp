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


void flood(vector<vector<char>> &matrix, int r, int c, int dx, int dy){
    if(r >=0 && r < matrix.size() && c >=0 && c < matrix[0].size()){
        if(matrix[r][c] == '#' || matrix[r][c] == 'O'){
            return;
        }
        //cout << dx << " " << dy << "\n";
        if(matrix[r][c] == '.'){
            matrix[r][c] = '@';
        }
        else if(matrix[r][c] == '\\'){
           // cout << "hit" << dx << " " << dy;
            if(dx == -1){
                dx =  0;
                dy = -1;
            }
            else if(dx == 1){
                dx = 0;
                dy = 1;
            }
            else if(dy == 1){
                dy = 0;
                dx = 1;
            }
            else if(dy == -1){
                dy = 0;
                dx = -1;
            }
        }
        else if(matrix[r][c] == '/'){
            if(dx == -1){
                dx =  0;
                dy = 1;
            }
            else if(dx == 1){
                dx = 0;
                dy = -1;
            }
            else if(dy == 1){
                dy = 0;
                dx = -1;
            }
            else if(dy == -1){
                dy = 0;
                dx = 1;
            }
        }
        flood(matrix, r+dy, c+dx, dx, dy);
    }
}

int main () {
    fio;
    int n; int m;
    cin >> n >> m;
    
    vector<vector<char>> matrix;
    for(int i = 0; i<n; i++){
        string s; cin >> s;
        vector<char> temp;
        for(int a = 0; a < m; a++){
            temp.push_back(s[a]);
        }
        matrix.push_back(temp);
    }
    
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 'O'){
                flood(matrix, i,j+1, 1, 0);
                flood(matrix, i,j-1, -1, 0);
                flood(matrix, i+1,j, 0, 1);
                flood(matrix, i-1,j, 0, -1);
            }
        }
    }
    
    for(auto i:matrix){
        for(int a = 0; a<m; a++){
            cout << i[a] << "";
        }
        cout << "\n";
    }

    return 0;
    
}