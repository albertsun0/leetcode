#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#define _USE_MATH_DEFINES 
using namespace std;
#define pb push_back
#define ll long long
#define M_PI 3.1415926535

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

double angle(int x, int y){
    if(x == 0){
        if(y > 0){
            return 90;
        }
        else{
            return 270;
        }
    }

    double a = atan2(y,x);
    cout << "rad " << a << "\n";
    a *= 180/M_PI;

    cout << "angle" << a << "\n";
    if(a < 0){
        return a+360;
    }
    return a;
}

double angle2(int x, int y){
    if(x == 0){
        if(y > 0){
            return 90;
        }
        else{
            return 270;
        }
    }

    double a = atan2(y,x);
    cout << "rad " << a << "\n";
    a *= 180/M_PI;

    cout << "angle2 " << 180-a << "\n";

    
    return 180-a;

    // if(a < 0){
    //     return a+360;
    // }
    return a;
}



int main () {
    fio;
    int n; cin >> n;

    vector<double> angles;
    //vector<double> angles2;

    // cout << angle(1,0) << "\n";
    // cout << angle(0,1) << "\n";
    // cout << angle(-1,0) << "\n";
    // cout << angle(0,-1) << "\n";

    // cout << angle(1,1) << "\n";
    // cout << angle(-1,1) << "\n";
    // cout << angle(-1,-1) << "\n";
    // cout << angle(1,-1) << "\n";

    for(int i = 0; i<n; i++){
        int a; int b;
        cin >> a >> b;
        angles.push_back(angle(a,b));
        //angles2.push_back(angle2(a,b));
    }

    sort(angles.begin(), angles.end());
    //sort(angles2.begin(), angles2.end());

    // double angle = angles[angles.size()/2];

    // if(angle <= angles[angles.size()-1] && angle >= angles[0]){
    //      cout << (angles[angles.size()-1] - angles[0]);
    // }
    // else{
    //     cout << "case2";
    //     cout << (angles2[angles2.size()-1] - angles2[0]);
    // }
    
    double min = 370;
    int end = angles.size()-1;
    for(int i = 0; i< angles.size(); i++){
        double temp = angles[i] + angles[end];
    }



    return 0;
    
}