#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


bool isprime[maxn]; 
void sieve() {//true means prime
    fill(isprime+2, isprime+maxn, 1);
    for (int i=2; i<maxn; i++)
        if (isprime[i]) {
            for (int j=2*i; j<maxn; j+=i)
                isprime[j] =  false;
        }
}


int next(int n){
    int nxt = 0, pre = 0;
    for(int i = n+1; ;i++){
        nxt++;
        if(isprime[i])break;
    }
    return nxt;
}
void task(){
    int n, m; cin >> n >> m;
    vector<vector<int>>a(n+1, vector<int>(m+1, 0));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> a[i][j];
        }
    }

    int row = mod, col = mod, r = 0, c = 0;
    for(int i = 0; i<n; i++){
        int cnt = 0;
        for(int j = 0; j<m; j++){
            if(!isprime[a[i][j]])cnt+=next(a[i][j]);
        }
        if(cnt == 0){
            cout << 0 << endl;
            return;
        }
        if(cnt < row){
            row = cnt;
        }
    }


    for(int i = 0; i<m; i++){
        int cnt = 0;
        for(int j = 0; j<n; j++){
            if(!isprime[a[j][i]])cnt+=next(a[j][i]);
        }
        if(cnt == 0){
            cout << 0 << endl;
            return;
        }
        if(cnt < col){
           col = cnt;
        }
    }

    cout << min(col, row) << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    sieve();
    int T = 1; //cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}