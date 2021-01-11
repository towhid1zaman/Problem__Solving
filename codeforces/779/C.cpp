#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

bool cmp(const pair<int,int>&a, const pair<int, int>&b){
    if((a.first - a.second) == (b.first - b.second)){
        return a.first < b.first;
    }

    return (a.first - a.second) < (b.first - b.second);
}
void task(){
    int n, k; cin >> n >> k;
    std::vector< pair<int, int> > v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i].first;
    }
    for(int i = 0; i<n; i++){
        cin >> v[i].second;
    }
    sort(all(v), cmp);

    int cost = 0;
    for(int i = 0; i<n; i++){
        if(i < k){
            cost+=v[i].first;
        }
        else{
            cost+= min(v[i].first, v[i].second);
        }
    }

    cout << cost << endl;
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