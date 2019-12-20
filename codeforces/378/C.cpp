#include "bits/stdc++.h"
using namespace std;
typedef long long ll;typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ff first
#define ss second
#define pb push_back

int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 600;

int n,m,k,s=0;
char maze[maxn][maxn];
bool vis[maxn][maxn] = {false};
int ct = 0;

void dfs(int x,int y){
    if(ct == s - k){
        return;
    }
    vis[x][y] = true;
    ct++;
    for(int i = 0; i<4;i++){
        int nx = x + dx4[i];
        int ny = y + dy4[i];
        if(nx<1 or nx>n or ny<1 or ny>m or vis[nx][ny]==true or maze[nx][ny] == '#') continue;
        dfs(nx,ny);
    }
}
int main(){
    _ios;

    cin>>n>>m>>k;
  //  fill(maze);
    int cx,cy;
    cx=cy = -1;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=m;j++){
            cin>>maze[i][j];
                if(maze[i][j]=='.'){
                    s++;
                    cx = i,cy = j;
            }
        }
    }
  //  cout<<cx<<" "<<cy<<endl;
    dfs(cx,cy);
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=m;j++){
            if(maze[i][j] != '#' and !vis[i][j]){
                cout<<'X';
            }
            else cout<<maze[i][j];
        }
        cout<<endl;
    }






return 0;
}




