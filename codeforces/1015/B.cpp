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
    string s, t; cin >> s >> t;
    
    std::vector<int>ind;
    std::map<char, int> ss,tt;
    
    for(char c:s)ss[c]++;
    for(char c:t)tt[c]++;
    
    bool ok = 0;
    for(char c:s){
        if(ss[c]!=tt[c]){
            ok = 1;
            break;
        }
    }
    for(char c:t){
        if(tt[c]!=ss[c]){
            ok = 1;
            break;
        }
    }

    for(int i = 0; i<n; i++){
        if(s[i] == t[i]){
            continue;
        }
        int nextOk = -1;
        for(int j = i+1;j<n; j++){
            if(s[j] == t[i]){
                nextOk = j;
                break;
            }
        }
        if(nextOk == -1){
            ok = 1;
            break;
        }
        while(nextOk > i){
            ind.push_back(nextOk);
            swap(s[nextOk], s[nextOk-1]);
            --nextOk;
        }
    }
    if(ok){
        cout << -1 << endl;
        return;
    }
    cout << ind.size() << endl;
    for(auto c:ind)cout << c <<' ';cout << endl;
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