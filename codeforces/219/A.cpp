#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
#define yes   printf("YES\n")
#define no     printf("NO\n")
#define nl       printf("\n")
#define pb     push_back
#define mp    make_pair
#define ff       first
#define ss      second
#define sz(X) ((int)(X).size())
#define lcm(a,b)       a * (b / gcd(a, b))
#define gcd(a,b)       __gcd(a,b)
#define test int ___T; scanf("%d", &___T); for(int cs=1;cs<=___T;cs++)
#define sqr(x)         (x)*(x)
#define cube(x)      (x)*(x)*(x)
const double pi = acos(-1);
///RW
#define R(a) scanf("%d", &(a))
#define W(a) printf("%d\n",(a))
#define RL(a) scanf("%lld",&(a))
#define WL(a) printf("%lld\n",(a))
///O
#define F(i,a,b) for(int i = (a) ; i<=(b);i++)
#define F0(N) for(int ii=0;ii<N;ii++)
#define F1(N) for(int ii=1;ii<=N;ii++)
#define FB0(N) for(int ii=N-1;ii>=0;ii--)
#define FB1(N) for(int ii=N;ii>0;ii--)

///sortingstringbytheirlengthincreasingorder
bool f(string s1,string s2){
    return s1.size()<s2.size();
}
        ///vector<string>s;sort(s.begin(),s.end(),f)

main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
 	//freopen("output.txt", "w", stdout);
        int n;
         string X,Y;
        cin>>n;
        string str;
        cin>>str;
       
        sort(str.begin(),str.end());
        //cout<<s<<endl;
        for(int i = 0; i<str.length();i+=n){
            X+=str[i];
        }
        //cout<<X<<endl;
        for(int i = 0; i<n;i++){
            Y+=X;
        }
        //cout<<Y<<endl;
        X=Y;
        //cout<<X<<endl;
        sort(X.begin(),X.end());
        //cout<<X<<endl;
        if(X!=str){
            cout<<-1;
        }
        else{
            cout<<Y<<endl;
        }

    return 0;
}



