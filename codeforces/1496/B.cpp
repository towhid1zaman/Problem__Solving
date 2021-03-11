/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

void task(){
    int n, k; cin >> n >> k;
    std::vector<int>a(n);
    std::map<int, int> cnt;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        cnt[ a[i] ]++;
    }
    sort(all(a));
    if(k==0){
        cout << n << endl;
        return;
    }

    int mex = 0, mx = 0;
    for(int i = 0; i<n; i++){
        if(a[i] == mex)mex++;
    }
    mx = a.back();

    if(mex > mx){
        cout << n + k << endl;
        return;
    }

    int add = (mex + mx + 1)/2;

    if(cnt[add] == 0){
        cout << n + 1 << endl;
        return;
    }

    cout << n << endl;
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