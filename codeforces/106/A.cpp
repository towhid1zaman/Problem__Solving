
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< int, int > pii;
typedef vector<pii>vip;
typedef pair< pii, int > ppi;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 200005;
 
void task(){
 	char suit; cin >> suit;
 	std::map<char,int> rank;
 	rank['6']=1,rank['7']=2,rank['8']=3,rank['9']=4;
 	rank['T']=5,rank['J']=6,rank['Q']=7,rank['K']=8,rank['A']=9;
 	rank['S'] = 4, rank['H']=3, rank['D']=2, rank['C']=1;
 	string first,second; cin >> first >> second;
 	if(first[1]==second[1]){
 		if(rank[first[0]]>rank[second[0]])cout <<"YES"<<endl;
 		else cout << "NO" << endl;
 	}
 	if(first[1]!=second[1]){
 		if(first[1]==suit)cout <<"YES"<<endl;
 		else if(second[1]==suit)cout <<"NO"<<endl;
 		else if(rank[first[0]]>rank[second[0]] and rank[first[0]]>rank[first[0]])cout <<"YES"<<endl;
 		else cout <<"NO"<<endl;
 	}

}

int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif

        int T = 1; //cin >> T;
        while(T--){
            task();
        }
        
return 0;
}


