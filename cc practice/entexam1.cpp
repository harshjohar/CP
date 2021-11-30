#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define get getchar
// finally submitted...phew!
int scan()
{
    int n=0,ch=get();
    while(ch<'0'||ch>'9')
    ch=get();
    while(ch>='0'&&ch<='9')
    {
        n=n*10 + ch - '0';
        ch=get();
    }
    return n;
}

int main()
{
    int tcases;
    tcases=scan();
    while(tcases--)
    {
        int n,k,e,m;
        n=scan();
        k=scan();
        e=scan();
        m=scan();
        int temp;
        long long a[n];

        for(int j=0;j<n-1;j++)
        {
        a[j]=0;
        for(int i=0;i<e;i++)
        {
            temp=scan();
            a[j]+=temp;
        }
        }

        a[n-1]=0;
        for(int i=0;i<e-1;i++)
        {
            temp=scan();
            a[n-1]+=temp;
        }

        sort(a,a+n-1);
        reverse(a,a+n-1);

        long long dif = a[k-1]-a[n-1]+1;
        if(dif<0)
        cout<<0<<endl;
        else
        {
            if(dif<=m)
            cout<<dif<<endl;
            if(dif>m)
            cout<<"Impossible"<<endl;
        }
        }
        return 0;
}
