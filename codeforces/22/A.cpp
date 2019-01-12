#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    int n;
    cin>>n;
    int x;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
        set<int>::iterator it;
                if(s.size()==1)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    it = s.begin();
                    it++;
                    cout<<(*it)<<endl;
                }
                        return 0;
}

