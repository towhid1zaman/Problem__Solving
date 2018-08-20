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
	ll n, m;
	cin>>n>>m;
	char A[n][m];
                ll sumB = 0;
                ll sumC = 0;
            for(ll i = 0 ; i<m;i++)
            {
                for(ll j = 0 ; j<n; j++)
                {
                    cin>>A[i][j];
                    if(A[i][j] == 'W' or A[i][j] == 'G' or A[i][j] =='B')
                    {
                        sumB++;
                    }
                    else
                        sumC++;
                }
            }
            //cout<<sumC<< " " <<sumB;
            if(sumC>=1)
            {
                cout<< "#Color" <<endl;
                return 0;
            }
            if(sumC > sumB)
            {
                cout<< "#Color" <<endl;
            }
            if(sumB>sumC)
            {
                cout<< "#Black&White"<<endl;
            }
          /*  for(ll i = 0 ; i<m;i++)
            {
                for(ll j = 0 ; j<n; j++)
                {
                    cout<<A[i][j]<< " ";
                }
                cout<<endl;
            }
                    */
    return 0;
}


