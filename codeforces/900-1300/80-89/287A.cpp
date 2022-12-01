#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;

    vector<string> v = {"####", ".###", "#.##", "##.#", "###.", "....", "#...", ".#..", "..#.", "...#"};

    vector<vector<char>> arr;

    for(int i = 0; i< 4; i++){
        vector<char> t;
        for(int a = 0; a < 4; a++){
            char c; cin >> c;
            t.push_back(c);
        }
        arr.push_back(t);
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(string s: v){
                if(arr[i][j] == s[0] && arr[i+1][j] == s[1] && arr[i][j+1] == s[2] && arr[i+1][j+1] == s[3]){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }

    cout << "NO";
    return 0;
}