
// </> : towhid1zaman

#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define deb(x) cout<<#x <<"="<<x<<endl;
#define present(v,x) ((v).find(x)!=(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);
#define sp(k) cout<<setprecision(k)<<fixed;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()


#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)

#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define yn(k) if(k)puts("YES");else puts("NO");

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 200005;

/*
 *
 */

void No(){
	cout << -1 << endl;
	return;
}

void task(){
	int n; cin >> n;
	vector<vector<ll>>mat(n, vector<ll>(n));

	vll rowSum(505,0), columnSum(505, 0);
	int row, column;
	for(int i = 0; i < n; i++){
		for(int j = 0; j< n; j++){
			cin >> mat[i][j];

			rowSum[i] += mat[i][j];
			columnSum[j] += mat[i][j];
			if(mat[i][j] == 0 ){
				row = i, column = j;
			}
		}
	}    

	if(n==1){
		cout << 1 << endl;
		return;
	}

	ll rS = (row == 0 ? rowSum[1] : rowSum[0]);
	ll cS = (column ==0 ? columnSum[1] : columnSum[0]);

	if(rS != cS){
			No();
			return;
		}

	ll dS1 = 0, dS2 = 0;

	for(int i = 0; i<n; i++){
		dS1 += mat[i][i];
	}

	for(int i = 0, j = n-1; i<n; i++, j--){
		dS2 += mat[i][j];
	}

	for(int i = 0; i<n; i++){
		if(row !=i and rS != rowSum[i]){
			No();
			return;
		}
		else if(column != i and cS != columnSum[i]){
			No();
			return;
		}
	}

	if(row != column and dS1 != rS){
		No();
		return;
	}
	else if(row + column != n-1 and dS2 != cS){
		No();
		return;
	}

	else if(rowSum[row] != columnSum[column]){
		No();
		return;
	}

	else if(row == column and rowSum[row] != dS1) {
		No();
		return;
	}

	else if(row + column == n-1 and rowSum[row] != dS2) {
		No();
		return;
	}

	else if(rowSum[row] >= rS){
		No();
		return;
	}

	cout << rS - rowSum[row] << endl;



}

int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif

        int T = 1; ///cin >> T;
        while(T--){
            task();
        }
        
        
return 0;
}


