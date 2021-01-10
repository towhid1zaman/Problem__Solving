#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    string s; cin >> s;
    std::vector<int> left, right;
    for(int i = 0; i<s.size(); i++){
        if(s[i]=='(')left.push_back(i);
        else right.push_back(i);
    }
    reverse(all(left));
    std::vector<int>ans;

    while(left.size() and right.size() and left.back() < right.back()){
        if(left.size()){
            ans.push_back(left.back());
            left.pop_back();
        }
        if(right.size()){
            ans.push_back(right.back());
            right.pop_back();
        }
    }
    if(ans.empty()){
        cout << 0 << endl;
        return;
    }
    cout << 1 << endl;
    cout << ans.size()<<endl;
    sort(all(ans));
    for(auto a:ans)cout << a+1 <<' ';cout << endl;
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