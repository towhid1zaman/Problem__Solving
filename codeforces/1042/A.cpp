#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n, m; cin >> n >> m;
    std::vector<int>v(n);
    priority_queue<int, std::vector<int> , greater<int> > Q; // small value first
    
    for(int i = 0; i<n; i++){
        cin >> v[i];
        Q.push(v[i]);
    }
    int kmax = *max_element(all(v))+m;
    //siting m people one by one
    while(m--){
        int x = Q.top();
        Q.pop();
        Q.push(x+1);
    }
    int kmin;
    while(!Q.empty()){
        kmin = Q.top();
        Q.pop();
    }
    cout << kmin << ' '<<kmax << endl;
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