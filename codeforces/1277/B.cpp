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
    std::vector<int> a(n);
    set<int>ans;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }   
    for(int i = 0; i<n; i++){
        int m = a[i];
        while(m%2==0){
            ans.emplace(m);
            m/=2;
        }
    }
    //ans = how many time their division occured = operations
    cout << ans.size() << endl;
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