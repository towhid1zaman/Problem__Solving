#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


struct disjoint{
        int fa[maxn];
        void Build(int n){
            for(int i = 0; i<=n; i++) fa[i]=i;
        }
        int Find(int x){ 
            return x==fa[x]?x:fa[x]=Find(fa[x]);
        }
        void Union(int a, int b){ 
            fa[Find(a)]=Find(b);
        }
}dsu;


void task(){
        int n, m; cin >> n >> m;
        dsu.Build(n);
        for(int i = 1; i<=m; i++){
            int a, b; cin >> a >> b;
            dsu.Union(--a, --b);
        }
        std::vector<int>u[100], g[10];

        for(int i = 0; i<n; i++){
            u[ dsu.Find(i) ].push_back(i);
        }

        for(int i = 0; i < n; i++){
            if(u[i].size() > 3){
                cout << -1 << endl;
                return;
            }
            if(u[i].size()){
                g[ u[i].size() ].push_back(i);
            }
        }

        while(g[2].size()){
            if(!g[1].size()){
                cout << -1 << endl;
                return;
            }

            int x = g[2].back(); g[2].pop_back();
            int y = g[1].back(); g[1].pop_back();
            u[x].push_back( u[y][0] ); u[y].clear();
            g[3].push_back(x);
        }

        while(g[1].size()){
            if(g[1].size() % 3){
                cout << -1 << endl;
                return;
            }
            int x = g[1].back(); g[1].pop_back();
            int y = g[1].back(); g[1].pop_back();
            int z = g[1].back(); g[1].pop_back();
            u[x].push_back( u[y][0] ); u[y].clear();
            u[x].push_back( u[z][0] ); u[z].clear();
            g[3].push_back(x);
        }

        for(int i = 0; i<n/3; i++){
            int x = g[3][i];
            for(int j = 0; j<3; j++){
                cout << u[x][j] + 1 <<' ';
            }
            cout << endl;
        }
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