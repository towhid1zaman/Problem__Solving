#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
	int n; cin >> n;
	string s; cin >> s;
	bool ans = false;
	if(s.substr(0,4)=="2020")ans = true;
	if(s.substr(n-4,4)=="2020")ans = true;
	if(s.substr(0,2)=="20" and s.substr(n-2,2)=="20")ans = true;
	if(s.substr(0,1)=="2" and s.substr(n-3,3)=="020")ans = true;
	if(s.substr(0,3)=="202" and s.substr(n-1,1)=="0")ans = true;
	cout << (ans? "YES" : "NO") << endl;

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