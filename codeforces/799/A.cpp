#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
	int n,t,k,d; cin >> n >> t >> k >> d;
	if(k>=n and t<=d){
		cout << "NO" << endl;
		return;
	}

	// ceil(a/b) equvalent to (a+b-1)/b
	int time_without_second = n/k;
	if(n%k)time_without_second++;
	time_without_second*=t;

	if(time_without_second > d+t){
		cout << "YES" << endl;
		return;
	} 
	else cout << "NO"<<endl;
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