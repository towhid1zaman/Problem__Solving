#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define nl "\n"
#define X first
#define Y second

#define MAX INT_MAX
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define check() {printf("OK\n");}
#define srt(v) sort(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())

#define mem(a,x) memset(a,x,sizeof(a))
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())

#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define unq(v) srt(v),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define MOD 1000000007   // (int)1e9+7

typedef vector <int> vi;
typedef pair <int, int> pii;
typedef vector<pii>vip;

int main(){f();


        int n;
        cin>>n;
        pii temp;
        vip v;
        for(int i = 0; i<n;i++)
        {
           int a,b;
           cin>>a>>b;
            temp.first =(a);
            temp.second=(b);
            v.push_back(temp);
        }
        int sum =0;
        for(int j = 0; j<n;j++)
        {
            int x = v[j].first;
            int y = v[j].second;
            int r=0,l=0,u=0,d=0;
                for(int i = 0; i<n;i++)
                {
                    if(x==v[i].X and y==v[i].Y)
                    {
                        continue;
                    }
                    if(x>v[i].X and y==v[i].Y)
                    {
                       r++;
                    }
                    if(x<v[i].X and y==v[i].Y)
                    {
                        l++;
                    }
                    if(x==v[i].X and y>v[i].Y)
                    {
                        u++;
                    }
                    if(x==v[i].X and y<v[i].Y){
                        d++;
                    }
                }
                if(r>=1 and l>=1 and u>=1 and d>=1){
                    sum++;
                }
        }
            cout<<sum<<nl;






return 0;
}

