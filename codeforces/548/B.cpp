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
#define pd(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())

const int mod = 1000000007; // (int)1e9+7
const int N = 505;
int mat[N][N],res[N];
int main(){
	IO
    int n,m,q;
    cin>>n>>m>>q;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0; j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    for(int i = 0; i<n;i++)
    {
        int cnt =0;
        for(int j = 0; j<m;j++)
        {
            if(mat[i][j]){
                cnt++;
            }
            else
                cnt = 0;
            res[i] = max(cnt,res[i]);
        }
    }
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        --a,--b;
        if(mat[a][b])mat[a][b]=0;
            else mat[a][b]=1;
        int cnt = 0,ans=0;
        for(int i = 0; i<m;i++)
        {
            if(mat[a][i])cnt++;
            else
                cnt=0;
            ans = max(cnt,ans);
        }
        res[a] = ans;
        int result = 0;
        for(int i = 0; i<n;i++)
        {
            result = max(res[i],result);
        }
        cout<<result<<endl;
    }

return 0;
}

