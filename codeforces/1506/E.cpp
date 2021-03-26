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

std::vector<int> mn(int n, std::vector<int> a){
    std::vector<int>ans;
    
    set<int>s;
    rep(i, n)s.emplace(i+1);

    std::map<int,int>cnt;
    for(auto x:a)cnt[x]++;

    int prev = -1;
    for(auto x:a){
        if(x!=prev){
            ans.push_back(x);
            s.erase(x);
            cnt[x]--;

            rep(i, cnt[x]){
                ans.push_back(*s.begin());
                s.erase(*s.begin());
            }
            prev = x;
        }
    }

    return ans;
}

std::vector<int> mx(int n, std::vector<int> a){
    std::vector<int>ans;
    
    set<int>s;
    rep(i, n)s.emplace(i+1);

    std::map<int,int>cnt;
    for(auto x:a)cnt[x]++;

    int prev = -1;
    for(auto x:a){
        if(x!=prev){
            ans.push_back(x);
            s.erase(x);
            cnt[x]--;

            rep(i, cnt[x]){
                auto indx = s.upper_bound(x);
                indx--;
                ans.push_back(*indx);
                s.erase(*indx);
            }
            prev = x;
        }
    }

    return ans;
}

void task(){
    int n; cin >> n;
    std::vector<int>a(n);
    rep(i, n) cin >> a[i];

    std::vector<int>minPer = mn(n, a);
    std::vector<int>maxPer = mx(n, a);

    for(auto p:minPer)cout << p <<' ';cout << endl;
    for(auto p:maxPer)cout << p <<' ';cout << endl;
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