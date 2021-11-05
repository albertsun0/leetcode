#include <iostream>
#include "vector"
using namespace std;

int main () {
    cout << "hello" << "\n";
    return 0;
}

int numIslands(vector<vector<char>>& grid) {
    int ans = 0;
    for(int r = 0; r<grid.size(); r++){
        for(int c = 0; c<grid.size(); c++){
            if(grid[r][c] != '2' && grid[r][c] != '0'){
                ans++;
                flood(r, c, grid);
            }
        }
    }
    return ans;
}

void flood(int r, int c, vector<vector<char>> grid){
    if(r < grid.size() && r >= 0 && c <grid[0].size() && c>= 0){
        if(grid[r][c] != '2' && grid[r][c] != '0'){
            grid[r][c] = '2';
            flood(r+1,c,grid);
            flood(r-1,c,grid);
            flood(r,c+1,grid);
            flood(r,c-1,grid);
        }
    }
    
}