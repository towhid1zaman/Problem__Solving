#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
	char str[10000000],countStr;
	cin>>str;
	if(strlen(str)<7)
		cout<<"NO"<<endl;
	else{
		int f=0;
		for(int i=0;i<strlen(str)-6;i++){
			countStr=str[i];
			if(str[i+1]==countStr && str[i+2]==countStr && str[i+3]==countStr && str[i+4]==countStr && str[i+5]==countStr && str[i+6]==countStr){
				f=1;
				cout<<"YES"<<endl;
				break;
			}
		}
		if(f==0)
			cout<<"NO"<<endl;
	}
	return 0;
}
