#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n; cin >> n;
    std::vector< pair<int,int> > points(n);

    for(int i = 0; i<n; i++){
        cin >> points[i].first >> points[i].second;
    }

    sort(all(points));

    int x = 0, y = 0;
    string ans="";
    for(int i = 0; i<n; i++){
        int r = points[i].first - x;
        int u = points[i].second - y;
        if(r<0 or u < 0){
            cout << "NO"<<endl;
            return;
        }
        for(int j = 0; j<r; j++)ans+='R';
        for(int j = 0; j<u; j++)ans+='U';
        x = points[i].first, y = points[i].second;
    }

    cout << "YES"<<endl;
    cout << ans << endl;
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