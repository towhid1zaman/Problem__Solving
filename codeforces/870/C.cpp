#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


bool isprime(int n){
    if(n==2 or n==1 or n==3)return true;
    if(n<2 or n%2==0)return false;
    for(int p = 3; p*p<=n;p+=2){
        if(n%p==0){
            return false;
        }
    }
    return true;
}



void task(){
    int n; cin >> n;
    int cnt = 0;
    if(n%2==1 and n>=9)n-=9, cnt++;
    if(n%2==0 and n>=4)cnt+=n/4, n = 0;
    cout << (!n  and cnt?cnt:-1)<<endl;
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