#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

#define pb push_back
#define lcm(a,b) a * (b / gcd(a, b))
#define gcd(a,b) __gcd(a,b)
#define nl "\n"
#define inf 2e16
#define pi	acos(-1.0)
#define ff first
#define ss second
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define sqr(a) ((a)*(a))
#define mem(a,x) memset(a,x,sizeof(a))
#define RL(x) scanf("%lld",&x)
#define R(x) scanf("%d",&x)
#define RS(x) cin>>s
//#define RSL(x) scanf(" %[^\n]", x)
#define RSL(cin, x) getline(cin, x)
#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())
#define f(i,a,b) for(int i = a; i<=b;i++)
int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

        string s;
        cin>>s;
        int n = s.length();
        int check[256];
        if(n<26){
            cout<<-1<<nl;
            return 0;
        }
        else{
                for(int i = 0; i+26 <=n;i++)
                {
                    mem(check,0);
                    for(int j = i; j<i+26; j++)
                    {
                        check[s[j] ] ++;
                    }
                    int letters = 0;
                    for(int j = 'A'; j<= 'Z'; j++)
                    {
                        if(check[j]==1){
                            letters++;
                        }
                    }
                    if(letters+check['?']==26)
                    {
                        int letter = 'A';
                        for(int j = i; j<i+26;j++)
                        {
                            if(s[j]=='?')
                            {
                                while(check[letter]==1)
                                {
                                    letter++;
                                }
                                s[j ] = letter;
                                letter++;
                            }
                        }
                        replace(s.begin(),s.end(),'?','A');
                        cout<<s<<nl;
                        return 0;
                    }
                }
                cout<<-1<<nl;
        }
     return 0;
}
