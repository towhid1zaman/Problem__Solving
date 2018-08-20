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
	string original="qwertyuiopasdfghjkl;zxcvbnm,./";
    char l;
    cin>>l;
    string typed;
    cin>>typed;
    string correct ="";
    size_t found;

        for (int i=0 ;i<typed.size();i++){
           found=original.find(typed[i]);
           if (l=='R'){
           correct+=original[found-1];
        }
            else if (l=='L'){
                correct+=original[found+1];
            }
        }


 cout<<correct<<endl;

    return 0;
}

