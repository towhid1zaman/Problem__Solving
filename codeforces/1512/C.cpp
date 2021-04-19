/*これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef std::vector<int> vi;
typedef std::vector<ll> vll;
#define endl "\n"
#define pb push_back
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define all(v) (v).begin(),(v).end()
const int maxn = 200005;
const int mod = 1000000007;

bool pal(string s){
    string t = s;
    reverse(all(t));
    return s==t;
}
void task(){
    int zero, one; cin >> zero >> one;
    string s; cin >> s;
    
    int n = zero+one;
    int l = 0, r = n-1;
    int copy_zero = zero, copy_one = one;
    
    for(;l<r;l++,r--){
        if(s[l] != s[r] and (s[l]!='?' and s[r]!='?')){
            cout << -1 << endl;
            return;
        }
        if(s[l] == '?' and s[r]=='?'){
            continue;
        }
        if(s[l] == '?')s[l] = s[r];
        else s[r] = s[l];
        if(s[l] == '0')copy_zero-=2;
        else copy_one-=2;
        if(copy_one < 0 or copy_zero < 0){
            cout << -1 << endl;
            return;
        }
    }
    
    l = 0, r = n-1;
    while(l < r){
        if(s[l]==s[r] and s[l]=='?'){
            if(copy_zero >= 2) s[l] = s[r] = '0', copy_zero-=2;
            else if(copy_one >= 2)s[l] = s[r] = '1', copy_one-=2;
            else{
                cout << -1 << endl;
                return;
            }
        }
        if(copy_one < 0 or copy_zero < 0){
            cout << -1 << endl;
            return;
        }
        l++, r--;
    }

    //odd
    if(n%2){
        if(s[n/2] == '?'){
            if(copy_one == 1)s[n/2] = '1', copy_one--;
            else if(copy_zero == 1)s[n/2] = '0', copy_zero--;
            else{
                cout << -1 << endl;
                return;
            }
        }
    }

    int cur_zero = count(all(s), '0'), cur_one = count(all(s), '1'), cur_ques = count(all(s), '?');
    
    if(cur_ques > 0){
        cout << -1 << endl;
        return;
    }
    else if(copy_zero < 0 or copy_one < 0){
        cout << -1 << endl;
        return;
    }
    else if(cur_zero!= zero and cur_one!=one){
        cout << -1 << endl;
        return;
    }
    else cout << s << endl;
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