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
    string s; cin >> s;
    bool less = 1, greater = 1;
    n*=2;
    string a = s.substr(0,n/2), b = s.substr(n/2,n/2);
    sort(all(a)), sort(all(b));
    for(int i = 0; i<a.size(); i++){
        if(a[i]<=b[i])less = 0;
    }
    for(int i = 0; i<a.size(); i++){
        if(a[i]>=b[i])greater = 0;        
    }
    //cant present < or > at the same time
    if(less or greater)cout << "YES"<<endl;
    else cout << "NO"<<endl;
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