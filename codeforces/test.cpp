#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int arr[10] = {0};
    for(int i = 0; i < 9; i++){
        string s; cin >> s;
        for(int a = 0; a < 10; a++){
            arr[a] += s[a*2] - '0';
        }
    }
    for(auto i: arr){
        cout << i << " ";
    }
    return 0;
}