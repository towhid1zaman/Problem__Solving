#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define nl "\n"
#define X first
#define Y second
#define MAX INT_MAX
#define pb(a) push_back(a)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*(b/gcd(a, b))
#define in(n) scanf("%d", &n)
#define out(n) printf("%d\n",n)
#define mp(a,b) make_pair(a,b)
#define check() {printf("OK\n");}
#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())
#define mem(a,x) memset(a,x,sizeof(a))
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define UNQ(v) SORT(v),(v).erase(unique((v).begin(),(v).end()),(v).end())


int main()
{f();
       	  //freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

        string s;
        cin>>s;
        int n = s.length();
        multiset<char>L;
        for(int i = 0; i<n;i++){
            L.insert(s[i]);
        }
//        each(it,L){
//                cout<<(*it)<<" ";
//        }
//        cout<<nl;
            string t,u;
            for(int i = 0; i<n;i++){
                t+=s[i];
                L.erase(L.find(s[i]));
                while(t.size()>0 and t.back()<=*L.begin()){
                    u+=t.back();
                    t.pop_back();
                }
//                //cout<<t<<" "<<u<<nl;
//                    //each(it,L){
//                //cout<<"multi "<<(*it)<<" ";
//             //   }
//                cout<<nl;

            }

            while(t.size()>0)
            {
                u.pb(t.back());
                t.pop_back();
            }
            cout<<u<<nl;

return 0;
}
