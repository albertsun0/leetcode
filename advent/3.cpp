#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string_view>
using namespace std;
#define pb push_back
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    string s; 
    int count = 0;
    int c1[12] = {0,0,0,0,0,0,0,0,0,0,0,0};
    int c0[12] =  {0,0,0,0,0,0,0,0,0,0,0,0};
    vector<string> v;
    vector<string> v2;
    while(cin >> s){
        if(s == "z"){
            break;
        }
        v.pb(s);
        v2.pb(s);
    }
    string least = "";
    string most = "0";
    string filter = "";
    bool found = false;
    int index = 0;

    while(!found){
        int count0 = 0;
        int count1 = 0;
        for(int i = 0; i< v.size(); i++){
            if(v[i][index] == '1'){
                count1++;
            }
            else{
                count0++;
            }
        }
        if(count1 >= count0){
            filter += "1";
        }
        else{
            filter+="0";
        }
        for(int i = 0; i<v.size(); i++){
            if(!(v[i].substr(0,filter.length()) == filter)){  
                v.erase(v.begin() + i);
                i--;
            }
        }
        if(v.size() == 1){
            most = v[0];
            found = true;
        }
        index++;
    }
    
    filter = "";
    found = false;
    index = 0;

    while(!found){
        int count0 = 0;
        int count1 = 0;
        for(int i = 0; i< v2.size(); i++){
            if(v2[i][index] == '1'){
                count1++;
            }
            else{
                count0++;
            }
        }
        if(count1 >= count0){
            filter += "0";
        }
        else{
            filter+="1";
        }
        cout << filter << "\n";
        for(int i = 0; i<v2.size(); i++){
            if(!(v2[i].substr(0,filter.length()) == filter)){  
                v2.erase(v2.begin() + i);
                i--;
            }
        }
        if(v2.size() == 1){
            least = v2[0];
            found = true;
        }
        index++;
    }
    int l = std::stoi(least, nullptr, 2);
    int g = std::stoi(most, nullptr, 2);
    cout << l << "\n";
    cout << g << "\n";
    cout << g*l;
    return 0;
}
//3597

// for(int i =0; i<12; i++){
//             if(s[i] == '1'){
//                 c1[i]++;
//             }
//             else{
//                 c0[i]++;
//             }
//         }

    // for(int i = 0; i<12; i++){
    //     if(c0[i] > c1[i]){
    //         least+= "0";
    //         most +="1";
    //     }
    //     else{
    //         least +="1";
    //         most+="0";
    //     }
    // }