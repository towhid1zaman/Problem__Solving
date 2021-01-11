#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

struct node{
    int x, y;
}v[maxn];
bool cmp(node a, node b){
    if((a.x - a.y) == (b.x - b.y)){
        return a.x < b.x;
    }

    return (a.x - a.y) < (b.x - b.y);
}

void task(){
    int n, k; cin >> n >> k;
    for(int i = 0; i<n; i++){
        cin >> v[i].x;
    }
    for(int i = 0; i<n; i++){
        cin >> v[i].y;
    }
    sort(v,v+n,cmp);

    int cost = 0;
    for(int i = 0; i<n; i++){
        if(i < k){
            cost+=v[i].x;
        }
        else{
            cost+= min(v[i].x, v[i].y);
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