#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <limits.h>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void printMaze(vector<vector<char>> & maze){
    for(int i = 0; i < maze.size(); i++){
        for(int j = 0; j <  maze[0].size(); j++){
            cout << maze[i][j];
        }
        cout << "\n";
    }
}

int count (vector<vector<char>> & maze, int r, int c){
    if(r < 0 || r >= maze.size() || c < 0 || c >= maze[0].size()){
        return 0;
    }
    if(maze[r][c] == '.'){
        maze[r][c] = '_';
        int s = count(maze, r+1, c) + count(maze, r-1, c) + count(maze, r, c+1) + count(maze, r, c-1);
        maze[r][c] = '.';
        return s+1;
    }
    return 0;
}

pair<int,int> find(vector<vector<char>> & maze){
    for(int i = 0; i < maze.size(); i++){
        for(int j = 0; j <  maze[0].size(); j++){
            if(maze[i][j] == '.'){
                return {i, j};
            }
        }
    }
    return {-1,-1};
}

int main () {
    fio;
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<char>> maze (n, vector<char>(m, '0'));
    int num = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char a; cin >> a;
            if(a == '.'){
                num++;
            }
            maze[i][j] = a;
        }
    }

    for(int i = 0; i < maze.size(); i++){
        for(int j = 0; j <  maze[0].size(); j++){
            if(k == 0){
                printMaze(maze);
                return 0;
            }
            if(maze[i][j] == '.'){
                maze[i][j] = 'X';
                pair<int,int> p = find(maze);
                num--;
                if(count(maze, p.first, p.second) == num){
                    k--;
                }
                else{
                    num++;
                    maze[i][j] = '.';
                }
            }
        }
    }

    printMaze(maze);

    return 0;
}