#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200010;
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
    int d; cin >> d;
    int x = upper_bound(all(primes), d) - primes.begin();
    ll a = primes[x];
    int y = lower_bound(all(primes), d+a) - primes.begin();
    ll b = primes[y];
    cout << a*b << endl;
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