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

const double pi = acos(-1.0);
const int maxn = 200005;
const int mod = 1000000007;

void task(){
    std::vector<string>v;
    int mx = 0;
    string s;
    while(getline(cin, s)){
        v.push_back(s);
        mx = max(mx, (int)s.size());
    }
    cout <<"*";
    for(int i = 1; i<=mx; i++)cout << "*";
    cout << "*"<<endl;
    int cnt = 1;
    for(int i = 0; i<v.size(); i++){
        int space = mx - v[i].size();
        if(space%2)cnt++;
        cout << "*";
        cout << string( space/2 + (space%2)*(cnt%2), ' ' );
        cout << v[i];
        cout << string( space - (space/2) - space%2 *(cnt%2), ' ' );
        cout << "*" << endl;
    }  
    cout <<"*";
    for(int i = 1; i<=mx; i++)cout << "*";
    cout << "*"<<endl;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
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