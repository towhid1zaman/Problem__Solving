#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;
bool is_p(int n){
    if(n == 2 or n == 3)return 1;
    if(n%2==0)return 0;
    for(int i = 3; i*i<=n; i+=2){
        if(n%i == 0)return 0;
    }
    return 1;
}
void task(){
    int n; cin >> n;
    if(n < 3){
        cout << -1 << endl;
        return;
    }
    if(n==3){
        cout << 3 << endl;
        cout <<1 <<' '<<2<<endl;
        cout <<1 <<' '<<3<<endl;
        cout <<2 <<' '<<3<<endl;
        return;
    }
    std::vector< pair<int, int> > edges;
    for(int i = 1; i<n; i++){
        edges.emplace_back(i, i+1);
        if(i==n-1)edges.emplace_back(n, 1);
    }
    if(is_p(edges.size())){
        cout << edges.size() << endl;
        for(auto e:edges){
            cout << e.first <<' '<<e.second<<endl;
        }
        return;
    }

    int cur = 1, next = (n/2)+1;
    for(int i = 1; i<n/2 and next <=n; i++){
        if(is_p(edges.size()))break;
        edges.emplace_back(i, next);
        next++;
    }
    cout << edges.size() << endl;
    for(auto e: edges){
        cout <<e.first<<' '<<e.second<<endl;
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

    int T = 1; //cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}