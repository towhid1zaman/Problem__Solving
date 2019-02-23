#include<bits/stdc++.h>
typedef long long LL;

#define pb     	push_back
#define mp    	make_pair
#define ff       	first
#define ss      	second
#define lcm(a,b)       	a * (b / gcd(a, b))
#define gcd(a,b)       	__gcd(a,b)
#define test int ___T; scanf("%d", &___T); for(int cs=1;cs<=___T;cs++)
#define sqr(x)         	(x)*(x)
#define cube(x)      	(x)*(x)*(x)
const double pi = acos(-1);
using namespace std;
///sortingstringbytheirlengthincreasingorder
bool f(string s1,string s2){
    return s1.size()<s2.size();
}
        ///vector<string>s;sort(s.begin(),s.end(),f)
    int in(){
    int v;
    scanf("%d",&(v));
    return v;
    }

    LL Lin(){
    LL v;
    scanf("%lld",&(v));
    return v;
    }

    double Din(){
    double v;
    scanf("%lf",&(v));
    return v;
    }

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
 	//freopen("output.txt", "w", stdout);
    int  x1 =in(), y1 = in(),x2=in(),y2=in();
    int x3,y3,x4,y4;
    if(x1==x2){
        x3 = x1 + abs(y1-y2);
        y3 = y1;
        x4 = x2 + abs(y1-y2);
        y4 = y2;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    }
    else if(y1==y2){
        x3 = x1;
        y3 = y1 + abs(x1-x2);
        x4 = x2;
        y4 = y2+ abs(x1-x2);
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    }
    else if(abs(x1-x2)==abs(y1-y2)){
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    }
    else
        cout<<-1;


    return 0;
}
