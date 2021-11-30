#include <bits/stdc++.h>
using namespace std;

long long arr[1000006];
int main()
{
    int n,t;
    long long sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int prev=1000000000;
        sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            if(arr[i]<=prev)
            {
                sum+=arr[i];
                prev=arr[i];
            }
            else sum+=prev;
        }
        cout<<sum<<endl;
    }
}
