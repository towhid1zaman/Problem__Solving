#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

  
//quick sieve
ll chek[maxn];
bool checkprime[maxn + 5];
vector<ll>prime;
void sieve() {///true means prime
    fill(checkprime,checkprime+maxn+5,1);
    prime.push_back(2);
    checkprime[0]=0;
    checkprime[1]=0;
    for(ll i = 4; i<=maxn; i+=2)checkprime[i] = 0;
    for (ll i = 3; i <= maxn; i += 2) {
        if (checkprime[i]) {
            prime.push_back(i);
            for (ll j = i * i; j <= maxn; j += (i + i))
                checkprime[j] = 0;
        }
    }
}
void task(){
    int n; cin >> n;
    if(n==1){
        cout << 1<<endl<<1 << endl;
    }
    else if(n==2){
        cout << 1 << endl;
        cout << 1 << ' '<<1<< endl;
    }
    else if(n==3){
        cout << 2 << endl;
        cout << "1 1 2"<<endl;
    }
    else{
        cout << 2 << endl;
        n++;
        for(int i = 2; i<=n; i++ ){
            if(!checkprime[i])cout << 1 <<' ';
            else cout <<2<<' ';
        }
        cout << endl;
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
    int T = 1; //cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}