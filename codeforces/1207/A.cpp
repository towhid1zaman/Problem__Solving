//https://youtu.be/3I3l-x93kOY
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define scan(n) scanf("%d", &n)
#define pin(n) printf("%d\n",n)
#define scanl(n) scanf("%lld", &n)
#define pll(n) printf("%lld\n",n)
const int mod = 1000000007; // (int)1e9+7
const int N = int(3e5) + 99;
int h,c;
int b,p,f;
int x = 0,y=0;
void query()
{
			cin>>b>>p>>f;
			int bb = b;
			cin>>h>>c;
			if(h>c)
            {
                b = b/2;
                x = min(b,p);
                x*=h;
                 if(b<p){
                    b = bb/2 -b;
                }
                else{
                    b = bb-p*2;
                }
                b=b/2;
                y = min(b,f);
                y*=c;
            }
            else
            {
                b = b/2;
                x = min(b,f);
                x*=c;
                if(b<f){
                    b = bb/2-b;
                }
                else{
                    b = bb-f*2;
                }
                b=b/2;
                y = min(b,p);
                y*=h;
            }
            cout<<y+x<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);

			int q;
			cin>>q;
			while(q--)
            {
                query();
            }







return 0;
}


