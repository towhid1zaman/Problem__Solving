#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
        int n;
            cin>>n;
                for(int i = 0; i<n;i++)
                {
                    int k;
                        cin>>k;
                            v.push_back(k);
                }
                sort(v.begin(), v.end());
                int sum =0;
                    for(int i = 0; i<n;i+=2)
                    {
                        sum+=v[i+1] - v[i];
                    }
                    cout<<sum<<endl;

            return 0;

}

