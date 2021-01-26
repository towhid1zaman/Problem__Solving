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
    int m; cin >> m;
    std::vector<int>a(n);
    ll tot = 0;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        tot+=a[i];
    }   

    std::vector<int>b(n);
    priority_queue<int>one, two; // greater value first
    
    for(int i =0; i<n; i++){
        cin >> b[i];
        if(b[i] == 1){
            one.push(a[i]);
        }
        else{
            two.push(a[i]);
        }
    }

    ll need = 0, ans = 0;
    while(need < m and tot >=m){
        if(two.empty()){
            need+=one.top();
            one.pop();
            ans+=1;
        }
        else if(one.empty()){
            need+=two.top();
            two.pop();
            ans+=2;
        }
        else if(one.size() == 1){
            if(need + one.top() >= m){
                need += one.top();
                one.pop();
                ans+=1;
            }
            else{
                need += two.top();
                two.pop();
                ans+=2;
            }
        }
        else{
            if(need + one.top() >=m){
                need += one.top();
                one.pop();
                ans+=1;
            }
            else{
                int _a1 = one.top();
                one.pop();
                int _a2 = one.top();
                one.push(_a1);
                int b_top = two.top();

                if(_a1 + _a2 >= b_top){
                    need+=one.top();
                    one.pop();
                    ans+=1;
                }
                else{
                    need+=two.top();
                    two.pop();
                    ans+=2;
                }
            }
        }
    }

    if(tot < m)ans = -1;
    cout << ans << endl;
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