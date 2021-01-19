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
    std::vector<int> a(n*2);
    int mx_id = 0;
    for(int i = 0; i<n*2; i++){
        cin >> a[i];
        if(a[i] > a[mx_id])mx_id = i;
    }

    // check one bye one, max er sathe another kon value ta nile baki gula sob remove kora jai

    int ans = -1;
    for(int i = 0; i<2*n; i++){
        if(i == mx_id) continue;

        int remove_one = a[mx_id];

        multiset<int>chek;
        for(int j = 0; j<2*n; j++){
            if(j == mx_id or j == i)continue;
            chek.emplace(a[j]);
        }

        bool okey = 1;

        while(!chek.empty()){

            // take greater value
            int g_val = *chek.rbegin();
            //remove
            chek.erase(chek.find(g_val));

            if(chek.find(remove_one - g_val) == chek.end()){
                okey = 0;
                break;
            }
            else{
                chek.erase( chek.find(remove_one - g_val) );
                // max value update
                remove_one = g_val;
            }
        }
        if(okey){
            ans = i;
            break;
        }
    }

    if(ans == -1){
        cout << "NO" << endl;
        return;
    }

    cout << "YES"<<endl;
    int remove_one = a[mx_id] + a[ans];
    cout << remove_one <<endl;

    // print them
    multiset<int>chek;

    for(int i = 0; i<2*n; i++){
        chek.emplace(a[i]);
    }

    while(!chek.empty()){
        // take greater value
        int g_val = *chek.rbegin();
        //remove
        chek.erase(chek.find(g_val));
        chek.erase(chek.find(remove_one - g_val));
        cout << g_val <<' '<<remove_one - g_val<<endl;
        // max value update
        remove_one = g_val;
    }

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