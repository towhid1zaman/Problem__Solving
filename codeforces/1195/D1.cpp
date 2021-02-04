#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 998244353;

///Convert int to string
template <typename T>
string to_str(T str)
{
    stringstream stream;
    stream << str;
    return stream.str();
}

///Convert string to int
template <typename T>
int to_int(T num)
{
    int val;
    stringstream stream;
    stream << num;
    stream >> val;
    return val;
}

void task(){
    int n; cin >> n;

    ll sum = 0;
    for(int i = 0; i<n; i++){
        string s; cin >> s;

        ll Now = 0;
        for(char c: s){
            Now = Now*10 + (c-'0');
            Now*=10;
            Now %= mod;
        }
        sum = (Now + sum)%mod;

        Now = 0;
        for(char c: s){
            Now*=10;
            Now = Now*10 + (c-'0');
            Now %= mod;
        }       
        sum = (Now + sum)%mod;
    }

    sum = (n*sum)%mod;

    cout << sum << endl;

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