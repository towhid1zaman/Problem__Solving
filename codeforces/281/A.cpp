#include<bits/stdc++.h>
#include<cstdio>
#include<string>

using namespace std;


int main()
{
    char str[10010];

    scanf("%s",str);

    int l = strlen(str);

    for(int i=0;i<l;i++)
    {
        if(str[0]>=97 && str[0]<=122)
        {
            str[0]-=32;
        }
    }
     cout<<str;


    return 0;
}
