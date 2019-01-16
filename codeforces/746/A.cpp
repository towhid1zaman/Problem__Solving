#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
	int main()
	{
		ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
		int a,b,c;
		int sum=0;
		int suma = 0;
		int sumb = 0;
		int sumc = 0;
		int cnt = 0;
		cin>>a>>b>>c;
		b/=2;
		c/=4;
                if(a<=b and a<=c)
                {
                    sum = a;
                }
                else if(b<=a and b<=c)
                {
                    sum  = b;
                }
                else if(c<=a and c<=b)
                {
                    sum = c;
                }

                    //cout<<cnt <<endl;
                    int aa=1,bb=2,cc=4;
                    suma = aa*sum;
                    sumb= bb*sum;
                    sumc = cc*sum;
                    //cout<<suma<<" "<<sumb<<" "<<sumc<<endl;
                        //cout<<suma+sumb+sumc<<endl;
                        cout<<sum+(sum*2)+(sum*4)<<endl;

		return 0;
	}

