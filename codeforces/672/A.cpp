  #include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
      	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

           string s;
            int i=1;
            while(s.length()<1001)
                s+=to_string(i++);
            int n;
            cin>>n;
            cout<<s[n-1]<<endl;

    return 0;
}



