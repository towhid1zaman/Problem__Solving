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
    std::vector< pair<int, int> > v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(all(v));

    priority_queue<int> Q; // greater value first
    
    int ans = INT_MAX;
    for(int i = 0; i<n; i++){
        while(!Q.empty() and -Q.top() < v[i].first){
            Q.pop();
        }
        int pos = lower_bound(v.begin()+i+1, v.end(), make_pair(v[i].second+1,0)) - v.begin();
        int a = i - Q.size();
        int b = n-pos;
        ans = min(ans, a+b);
        Q.push(-v[i].second);
    }

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