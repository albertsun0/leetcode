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

int main () {
    fio;
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    //start from back, 
    //for each kangaroo, find biggest kangaroo it can consume
    //remove from list

    /*
    two pointer    
    2 2 4 8 8 8 16 16
    
    */

    int consume = 0;
    int r = v.size()-1; //r points to big kangaroo
    int l = v.size()/2 - 1; //l points to smaller one

    while(l >= 0){
        while(l >= 0 && v[l] * 2 > v[r]){
            l--;
        }
        if(l >= 0){
            //cout << "consume " << v[l] << " \n";
            consume++;
            l--;
            r--;
        }
        
    }

    cout << n - consume;

    return 0;
}