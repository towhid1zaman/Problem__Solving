#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    string a, b; cin >> a >> b;
    if(a.size() != b.size()){
        cout << "NO" << endl;
        return;
    }
    if(a==b){
        cout << "YES"<<endl;
        return;
    }
    std::map<char,int>af, bf;
    for(char c:a)af[c]++;
    for(char c:b)bf[c]++;
    for(char ch = 'a'; ch<='z'; ch++){
        if(af[ch] != bf[ch]){
            cout << "NO" << endl;
            return;
        }
    }
    std::vector<int>dif_pos;
    for(int i = 0; i<a.size(); i++){
        if(a[i] != b[i])dif_pos.push_back(i);
    }
    if(dif_pos.size() != 2){
        cout << "NO";
        return;
    }
    swap(a[ dif_pos[0] ], a[ dif_pos[1] ]);
    cout << (a==b?"YES":"NO")<<endl;
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