#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

struct disjoint{
        int fa[maxn];
        int sz[maxn];
        void Build(int n){
            for(int i = 0; i<=n; i++) fa[i]=i, sz[i] = 1;
        }
        int Find(int x){ 
            return x==fa[x]?x:fa[x]=Find(fa[x]);
        }
        void Union(int a, int b){ 
            a = Find(a), b = Find(b);
            if(a==b)return;
            if(sz[a] < sz[b]) swap(a,b);
            fa[b] = a;
            sz[a] += sz[b];
        }
        int Size(int n){
            return sz[n];
        }
}dsu;

void task(){
    int n; cin >> n;
    dsu.Build(n);
    for(int i = 1; i <= n;i++){
        int p; cin >> p;
        dsu.Union(i, p);
    }
    for(int i = 1; i <= n; i++){
        cout << dsu.Size(dsu.Find(i))<<' ';
    }
    cout << endl;
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