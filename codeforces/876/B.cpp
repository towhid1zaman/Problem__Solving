#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n, k, m; cin >> n >> k >> m;
    std::vector<int> v(n);
    std::vector<int> modu[100000];
    for(int i = 0; i<n; i++){
        cin >> v[i];
        modu[v[i]%m].push_back(v[i]);
    }
    
    std::vector<int>ans;
    for(int i = 0; i<100000; i++){
        if(modu[i].size() >=k){
            for(auto x:modu[i]){
                ans.push_back(x);
            }
            break;
        }
    }
    if(ans.size()>=k){
        cout << "Yes"<<endl;
        for(int i = 0; i<k;i++){
            cout << ans[i]<<' ';
        }
        cout << endl;
        return;
    }
    cout << "No"<<endl;
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