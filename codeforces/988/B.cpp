#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int a[101];
bool comp(string s1, string s2)
{
    return s1.size()<s2.size();
}
bool isP(const string &s1, const string &s2){
	if(s2.find(s1)!=string::npos)return true;
	else return false;
}
int main()
{
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

            int n;
            cin>>n;
            vector<string>s(n);
                for(int i = 0; i<n;i++)
                {
                    cin>>s[i];
                }
                sort(s.begin(),s.end(),comp);
                int cnt =0;
                    for(int i=0; i<n-1; i++){
                            if(!isP(s[i], s[i+1])){
                                cout<<"NO";
                                return 0;
                                cnt++;
                            }
                    //cout<<cnt<<endl;
                    }cout<<"YES"<<endl;
                    for(int i = 0;i<n;i++)
                    {
                        cout<<s[i]<<endl;
                    }
        return 0;
}
