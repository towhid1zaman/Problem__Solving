/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

void task(){
    int hero_power, hero_health; cin >> hero_power >> hero_health;
    int n; cin >> n;
    
    std::vector<pair<int, int> >monsters(n);
    ll total_monsHealth = 0;
    for(int i = 0; i<n; i++){
        cin >> monsters[i].first;
    }
    for(int i = 0; i<n; i++){
        cin >> monsters[i].second;
        total_monsHealth+=monsters[i].second;
    }

    sort(all(monsters));
    bool ok = 1;
    for(int i = 0; i<n; i++){
        int monsters_power = monsters[i].first;
        int monsters_health = monsters[i].second;
        int Now = (monsters_health + hero_power - 1)/ hero_power;
        int Cur = (hero_health + monsters_power - 1)/monsters_power;
        hero_health -= (Now * monsters_power);
        if((hero_health <=0 and i!=n-1) or Cur < Now){
            ok = 0;
            break;
        }
    }

    if(ok){
        cout << "YES"<<endl;
    }
    else cout << "NO"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}