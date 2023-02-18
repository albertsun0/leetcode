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
#include <cmath>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

//generate a seeded value betwene 0 and 1
double gradient(int x, int y){
    double seed = 213918.2109019283;
    double seed2 = 943829.430193321093218128;
    double seed3 = 9120321.094393194303003;
    //idk this makes something kinda random hopefully
    double num = (x* seed + y *seed2);
    //cout << "gradient" << " " << x << " " << y << " "<< num - glm::floor(num) << "\n";
    return num - floor(num);
}

double interpolate(double lo, double hi, double t){
    // double ft = d * M_PI;
    // double f = (1- glm::cos(ft) * 0.5);
    // return a * (1-f) + b * f;
    //cout << "int " << lo << " " << hi << " " << t << " " << lo * (1-t) + hi * t << "\n";   
    return lo + t * (hi - lo);
}

double fade(double t){
    //perlin noise optimized ease function
    return ((6 * t - 15) * t + 10) * t * t * t;
}

double noise(double x, double y){
    //calculate gradient but needs to be larger steps?
    int x0 = floor(x);
    int y0 = floor(y);
    int x1 = x0 + 1;
    int y1 = y0 + 1;

    //cout << "grid cell" << x0 << " " << y0 << " " << x1 << " " << y1 << "\n";

    double dx = 1- (x - x0);
    double dy = y - y0;

    double br = gradient(x0, y0);
    double tr = gradient(x0, y1);
    double bl = gradient(x1, y0);
    double tl = gradient(x1, y1);

    //cout << br << " " << tr <<
    double u = fade(dx);
    double v = fade(dy);
    double ix = interpolate(bl, tl, v);
    double ix1 = interpolate(br, tr, v);
    double ans = interpolate(ix, ix1, u);
    //cout << ans << "\n";
    return ans;
}

int main(){
    map<double, int> m;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            cout << noise(i,j) << "\n";
            m[noise(i,j)]++;
        }
    }

    cout << "mapsize" <<  m.size();
    return(0);
}