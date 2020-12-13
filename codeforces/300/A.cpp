#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
        int n; cin >> n;
        std::vector<int>v(n), pos, neg, zero;
        for(int i = 0;i<n; i++){
            cin >> v[i];
        }
        
        for(auto x: v){
            if(x < 0)neg.push_back(x);
            if(x > 0)pos.push_back(x);
            if(x == 0)zero.push_back(x);
        }
        if(pos.empty()){
            pos.push_back(neg.back());
            neg.pop_back();
            pos.push_back(neg.back());
            neg.pop_back();
        }
        if(neg.size() %2 == 0 and neg.size() > 1){
            zero.push_back(neg.back());
            neg.pop_back();
        }
        cout << neg.size()<<' ';
        for(auto x: neg) cout << x<<' '; cout << endl;

        cout << pos.size() << ' ';
        for(auto x: pos) cout << x<<' '; cout << endl;

        cout << zero.size() << ' ';
        for(auto x: zero) cout << x<<' '; cout << endl;

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