#include<bits/stdc++.h>
using namespace std;

int main()
{
  	vector<int> v;
  	int n;
  	cin>>n;
  	int p;
  	for(int i = 0;i<n;i++)
    {
        cin>>p;
        v.push_back(p);
    }
    sort(v.begin(), v.end());
        int res1 = v[n-1];
        if(v[n-2]==res1){
            cout<<res1<<" "<<res1<<endl;
            return 0;
        }
        for(int i = n-2; i>=0;i--){
            if(res1%v[i] !=0 or v[i] == v[i-1]){
                cout<<v[i]<<" "<<res1<<endl;
                return 0 ;
            }
        }

    return 0;
}

