#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

set<int>ex;
pair<int, int>factorization(int n){
    int max_pow = 0, min_n = 1;
    for(int i = 2; i*i<=n; i++){
        int pw = 0;
        while(n%i==0){
            n/=i;
            pw++;
        }
        if(pw){
            min_n*=i;
            ex.insert(pw);
        }
        max_pow = max(max_pow, pw);
    }
    if(n > 1){
        min_n*=n;
        ex.insert(1);
    }

    return make_pair(min_n, max_pow);
}

int pow_2(int a){
    int p2 = log2(a);
    int now = 1;
    for(int i = 1; i<=p2; i++){
        now*=2;
    }
    if(now!=a)p2++;
    return p2;
}

void task(){
    int n; cin >> n;
    
    pair<int, int> ans = factorization(n);
    int min_n = ans.first, min_op = pow_2(ans.second);

    int ok = 0;
    for(auto x: ex){
        if(x != pow(2, min_op)){
            ok = 1;
            break;
        }
    }
    min_op+=ok;
    if(min_n == n) min_op = 0;
    
    cout << min_n << ' '<<min_op<<endl;
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