#include<bits/stdc++.h>
using namespace std;

int main()
{
 char str[100];
    char str1[200];
    int len,i;
    scanf("%s", str);
    len = strlen(str);
    for(i=0;i<len;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='Y'||str[i]=='U'){
            continue;
        }

        else{
        if(str[i]>=65 && str[i]<=90){
            str[i]=str[i]+32;
        }
            printf(".");
            printf("%c",str[i]);
        }
}
}
