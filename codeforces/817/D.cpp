/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 1000005;
const int mod = 1000000007;

ll ans = 0;
int n;
void go(std::vector<int>&a){
    std::vector<int>left(maxn, 0), right(maxn, 0);
    for(int i = 0; i<n; i++){
        left[i] = right[i] = i;
    }

    for(int i = 1; i<n; i++){
        int now = i;
        while(now and a[i] >= a[now - 1]){
            now = left[now-1];
        }
        left[i] = now;
    }

    for(int i = n-2; i>=0; i--){
        int now = i;
        while(now<n-1 and a[i] > a[now + 1]){
            now = right[now+1];
        }
        right[i] = now;
    }

    for(int i = 0;i<n; i++){
        ans += (ll)a[i] * (i - left[i] + 1) * (right[i] - i + 1);
    }
}
void task(){
    cin >> n;
    std::vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }   
    go(a);
    for(int i = 0; i<n; i++){
        a[i]*=-1;
    }
    go(a);
    cout << ans << endl;
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