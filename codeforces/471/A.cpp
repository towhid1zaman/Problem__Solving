#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    std::vector<int>v(6);
    std::map<int,int> mp;
    for(int i = 0; i<6; i++){
        cin >> v[i];
        mp[ v[i] ]++;
    }
    int f = 0, s = 0;
    for(auto p:mp){
        if(p.second > s)s = p.second, f = p.first;
    }

    if(mp.size() == 1 or (mp.size()==2 and mp[f] == 4)) cout << "Elephant" << endl;
    else if((mp.size() == 2 and mp[f]<4) or mp.size() > 3 or (mp.size()==3 and mp[f] < 4))cout << "Alien" << endl;
    else cout << "Bear" << endl;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T = 1; //cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}