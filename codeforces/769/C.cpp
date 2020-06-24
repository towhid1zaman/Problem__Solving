
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< int, int > pii;
typedef vector<pii>vip;
typedef pair< pii, int > ppi;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 2000100;


const int kx[8] = {-2, -2, -1, 1, -1, 1, 2, 2}, ky[8] = {1, -1, -2, -2, 2, 2, -1, 1}; //knight
const int dx8[8] = {1, 0, -1, 0, 1, 1, -1, -1}, dy8[8] = {0, 1, 0, -1, -1, 1, -1, 1}; //king
const int dx4[4] = {1,0,-1,0}, dy4[4] = {0,1,0,-1};
//lexicographically  smallest,"DLRU" order
int dx[]={+1,+0,+0,-1};
int dy[]={+0,-1,+1,+0};
int n,m,k;
char ch;
string Grid[1100];
int level[1100][1100];
int vis[1100][1100];
bool gridCheck(int x, int y) {
    return x >= 0 && y >= 0 && x < n && y < m && Grid[x][y]!='*';
}


void bfs(int row, int col){
    queue<pii>q;
    q.push({row,col});
    vis[row][col] = 1;

    while(!q.empty()){
        pii x = q.front();
        int Row = x.ff;
        int Col = x.ss;
        q.pop();
        for(int i = 0; i<4; i++){
            int nextRow = dx[i]+Row;
            int nextCol = dy[i]+Col;
            if(gridCheck(nextRow, nextCol) and vis[nextRow][nextCol]==0){
                q.push({nextRow,nextCol});
                vis[nextRow][nextCol] = 1;
                level[nextRow][nextCol] = level[Row][Col] + 1;
            }
        }
    }
}

int main(){
        _
        //string srtlen = "DLRU"

        cin >> n >> m >>k;

        for(int i = 0; i<n; i++){
            cin >> Grid[i];
        }

        if(k%2==1) return cout << "IMPOSSIBLE" <<endl, 0;
        int row,col;
        row = -1;
        for(int i = 0; i<n; i++){
            for(int j = 0 ; j<m; j++){
                if(Grid[i][j]=='X'){
                    row = i, col = j;
                    bfs(i,j);
                    break;
                }
            }
            if(row !=-1)break;
        }
        int K = k;
        vector<char>cycle;
        while(K--){
            for(int d = 0; d<4; d++){
                int nextRow = dx[d]+row;
                int nextCol = dy[d]+col;
                 if(gridCheck(nextRow, nextCol) and level[nextRow][nextCol]<=K){
                    if(d==0)ch='D';
                    else if(d==1)ch='L';
                    else if(d==2)ch='R';
                    else ch='U';
                    cycle.push_back(ch);
                    row = nextRow;
                    col = nextCol;
                    break;
                 }
            }
        }

        if(cycle.size() !=k)return cout << "IMPOSSIBLE" <<endl, 0;

        for(char x: cycle)cout<<x;





return 0;
}


