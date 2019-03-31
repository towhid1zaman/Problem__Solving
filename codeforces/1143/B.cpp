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

LL  power(LL  a, LL  b)
{
    int  ans = 1;
    for(int  i = 1; i<=b;i++){
        ans*=a;
    }
    return ans;
}
int main()
{
    string s;
    LL len,d=1,ans;
	cin>>s;
	//cout<<s<<nl;
	 len = s.length();
	 ans=power(9,len-1);
	for(int i = 0; i<len;i++)
    {
        ans = max(ans, d*power(9,len-i-1) * (s[i] - '1'));
        /// here,
        /// d means products of all the previous digit
        ///power (9,n-i-1) means product of succeeding all numbers as 9
        ///s[i]-1 means we have to reduce the current digit
        d*=(s[i]-'0');
    }

	LL res = max(ans,d);
	cout<<res<<endl;


	return 0;
}


