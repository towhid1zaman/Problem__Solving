#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n, k; cin >> n >> k;
    int tot = 0;
    std::vector<int>now(n), after(n);
    for(int i = 0; i<n; i++){
        cin >> now[i];
        tot+=now[i];
    }

    priority_queue<int> Q; // greater value first
    
    for(int i = 0; i<n; i++){
        cin >> after[i];
        int cur = now[i] - after[i];
        if(cur > 0){
            Q.push(cur);
        }
    }

    int rest = n-k;
    while(!Q.empty() and rest){
        tot-=Q.top();
        Q.pop();
        rest--;
    }

    cout << tot << endl;
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
