/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 5e6 + 10;;
const int mod = 1000000007;
std::vector< pair<int, int> > v[maxn];
void task(){
    int n; cin >> n;
    std::vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            int tot = a[i] + a[j];
            if(!v[tot].size()){
                v[tot].emplace_back(i, j);
            }else{
                pair<int, int> p = v[tot][0];
                if(p.first == i or p.second == i or p.first == j or p.second ==j){
                    continue;
                }
                cout << "YES"<<endl;
                cout << i+1 <<' '<<j+1<<' '<<p.first+1<<' '<<p.second+1<<endl;
                return;
            }
        }
    }
    cout << "NO"<<endl;
    return;
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