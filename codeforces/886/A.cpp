#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    std::vector<int>a(6);
    int tot = 0;
    for(int i = 0; i<6; i++){
        cin >> a[i];tot+=a[i];
    }
    bool f = 0;
    sort(all(a));
    do{
        if((a[0]+a[1]+a[2])*2==tot){
            f = 1;
            break;
        }
    }while(next_permutation(all(a)));
    cout << (f?"YES":"NO")<<endl;
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