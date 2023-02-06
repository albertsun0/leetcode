#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long
#include <algorithm>
#include <queue>
#include <set>
#include <map>
#include <limits.h>
#include <stack>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    //find which floor x and y are on
    vector<ll> floors;
    vector<ll> floorsize;
    ll floorx = -1;
    ll floory = -1;

    ll cursize = 1;
    ll floor = 1;
    floors.pb(0);
    floorsize.pb(1);
    while(floor < max(x,y)){
        floors.pb(floor);
        if(floors.size() % 2 == 0){
            cursize *= a;
        }
        else{
            cursize *= b;
        }
        //cout << "cursize " << cursize << "\n";
        floorsize.pb(cursize);
        floor += cursize;
        

        if(floorx == -1 && x < floor){
            floorx = floors.size() - 1;
        }
        if(floory == -1 && y < floor){
            floory = floors.size() - 1;
        }
    }

    // for(int i = 0; i < floors.size(); i++){
    //     cout << floors[i] << " " << floorsize[i] << "\n";
    // }
    
    /*
        move to floor lower
        if(floor % 2 == 0){
            floor(floorx - 1) + (x - floor(floorx - 1))/b
        }
        else{
            floor(floorx - 1) + (x - floor(floorx - 1))/a
        }
        
    */
    while(x != y){
        // cout << "floorx " << floorx << " " << "floory " << floory << "\n";
        // cout << x << " " << y << "\n";
        if(x == 0 || y == 0){
            cout << 0;
            return 0;
        }

        if(floorx >= floory){
            ll offset = (x - floors[floorx]);
            ll lowerix = floors[floorx - 1];
            if(offset != 0){
                if(floorx % 2 == 1){
                    lowerix += offset / a;
                }
                else{
                    lowerix += offset / b;
                }
            }
            x = lowerix;
            floorx--;
        }
        else if(floory > floorx){
            ll offset = (y - floors[floory]);
            ll lowerix = floors[floory - 1];
            if(offset != 0){
                if(floorx % 2 == 1){
                   lowerix += offset / a;
                }
                else{
                    lowerix += offset / b;
                }
            }
            y = lowerix;
            floory--;
        }
    }

    cout << x; 


    return 0;
   
}