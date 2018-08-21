#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f0(n) for(size_t i=0;i<n;i++)
#define f1(n) for(size_t i=1;i<=n;i++)
const double pi= acos(-1);
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll A[5][5];
	ll a,b,c,d,e;
	ll column;
	ll row=0;
	ll extra = 0;
        f1(5)
        {
            cin>>a>>b>>c>>d>>e;
                if(a==1){
                        column = 1;
                        row = i;
                        continue;
                }
                if(b==1){
                    column = 2;
                row = i;
                continue;
                }
                if(c==1){
                    column = 3;
                row = i;
                continue;
                }
                if(d==1){
                    column = 4;
                row  = i;
                continue;
                }
                if(e==1){
                    column = 5;
                row = i;
                continue;
        }
//                if(a ==1 or b==1 or c==1 or d==1)
//                        break;
        }
        //cout<<row<< " "<<column<< " "<<extra;
        ll result = abs(3- row) + abs(3-column);
        cout<<result<<endl;

    return 0;
}


