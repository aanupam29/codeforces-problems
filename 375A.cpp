#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
char s[N];
int a[N];
int main()
{
    scanf("%s",s);
    int n=strlen(s);
    long long k=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if((s[i]=='1'||s[i]=='6'||s[i]=='8'||s[i]=='9')&&!a[s[i]-'0'])
        {
          a[s[i]-'0']++;
        }
        else if(s[i]=='0')
            cnt++;
        else
        {
            printf("%c",s[i]);
            k=k*10+(long long)(s[i]-'0')*10000;
            k%=7;
        }
    }
    if(k==0)
        cout<<"1869";
    else if(k==1)
        cout<<"8196";
    else if(k==2)
        cout<<"1986";
    else if(k==3)
        cout<<"8691";
    else if(k==4)
        cout<<"6891";
    else if(k==5)
        cout<<"1689";
    else if(k==6)
        cout<<"1968";
    for(int i=1;i<=cnt;i++)
        printf("0");
    return 0;
}
