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

    unordered_set<int> squares;

    for(int i = 5; i < n+1; i++){
        squares.insert(i*i);
    }

    int count = 0;
    for(int i = 3; i < n; i++){
        for(int j = i+1; j < n; j++){
            int sq = i * i + j * j;
            if(squares.find(sq) != squares.end()){
                count++;
            }
        }
    }

    cout << count;

    return 0;
}