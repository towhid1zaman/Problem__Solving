#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

bool chek(int n, int i){
    return n>=0 and n<=i;
}
void task(){
    std::vector<string> v={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int n; cin >> n;
    for(int i = 1; ;i*=2){
        if(chek(n,i)){
            cout << v[0]<<endl;
            break;
        }
        n-=i;
        if(chek(n,i)){
            cout << v[1]<<endl;
            break;
        }
        n-=i;
        if(chek(n,i)){
            cout << v[2]<<endl;
            break;
        }
        n-=i;
        if(chek(n,i)){
            cout << v[3]<<endl;
            break;
        }
        n-=i;
        if(chek(n,i)){
            cout << v[4]<<endl;
            break;
        }
        n-=i;
    }
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