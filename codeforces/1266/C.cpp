#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int r, c; cin >> r >> c;
    if(r==1 and c==1){
        cout << 0 << endl;
        return;
    }
    if(r==1) {
        for(int i=1;i<=c; i++)cout<<i+1<<" ";
        cout<<endl;
        return;
    }
    if(c==1) {
        for(int i=1;i<=r; i++)cout<<i+1<<endl;;
        return;
    }
    int x = min(r,c)+1;
    std::vector<int>row, col;
    for(int i = 0; i<c; i++){
        row.push_back(x);
        x++;
    }
    x++;
    for(int i = 0; i<c;i++){
        col.push_back(x);
        x+=2;
    }
    for(int i = 1; i<=r; i++){
        for(int j = 1; j<=c; j++){
            cout << i*(j+r) <<' ';
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