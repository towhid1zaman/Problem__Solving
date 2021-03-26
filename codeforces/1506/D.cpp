/*これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef std::vector<int> vi;
#define endl "\n"
#define pb push_back
#define rep(i,a) for(int i=0;i<a;i++)
#define all(v) (v).begin(),(v).end()
const int maxn = 200005;
const int mod = 1000000007;

void task(){
    int n; cin >> n;
    std::map<int,int>cnt;
    rep(i, n){
        int a; cin >> a;
        cnt[a]++;
    }

    priority_queue< pair<int, int> > Q; // greater value first
    for(auto x:cnt){
        Q.push({x.second,x.first});
    }

    int ans = n;
    while(Q.size() > 1){
        int cnt1 = Q.top().first, v1 = Q.top().second;
        Q.pop();
        int cnt2 = Q.top().first,v2 = Q.top().second;
        Q.pop();

        cnt1--; cnt2--, ans-=2;
        if(cnt1 > 0)Q.push({cnt1, v1});
        if(cnt2 > 0)Q.push({cnt2, v2});
    }
    cout << ans << endl;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
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