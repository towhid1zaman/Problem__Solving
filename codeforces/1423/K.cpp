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

vector<int> primes;
bool isp[maxn]; 
void sieve() {//true means prime
    fill(isp+2, isp+maxn, 1);
    for (int i=2; i<maxn; i++)
        if (isp[i]) {
            for (int j=2*i; j<maxn; j+=i)
                isp[j] =  false;
            primes.push_back(i);
        }
}

void task(){
    int x; cin >> x;
    if(x==1){
        cout << 1 << endl;
    }
    else{
        int l = upper_bound(all(primes), x) - primes.begin();
        int u = upper_bound(all(primes), sqrt(x)) - primes.begin();
        cout << l - u + 1 << endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    sieve();
    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}