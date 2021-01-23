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
    int n = s.size();

    std::vector<int>a(26, 0), b(2000, 0);
    for(char c: s){
        a[c-'a']++;
    }

    for(int i = 2; i+i<=n; i++){
        for(int j = i; j<=n; j+=i){
            b[j] = 1;
        }
    }

    int k = 0;
    for(int i = 1; i<=n; i++) if(b[i])k++;

    int c = 0;
    for(int i = 1; i<26; i++){
        if(a[i] > a[c])c = i;
    }


    if(a[c] < k){
        cout << "NO"<<endl;
        return;
    }

    a[c]-=k;
    string ans = "";
    for(int i = 1, j = 0; i<=n; i++){
        if(b[i])ans+='a'+c;
        else{
            while(!a[j])j++;
            a[j]--;
            ans+='a'+j;
        }
    }
    cout << "YES"<< endl;
    cout << ans << endl;
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