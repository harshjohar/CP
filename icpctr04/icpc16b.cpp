#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef map<int,int> mii;
typedef map<ll,ll> mll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll>   vl;
#define f(i,n)  for(i=0;i<n;i++)
#define f1(i,n)  for(i=1;i<n;i++)
#define fr(i,n) for(i=n-1;i>=0;i--)
#define em emplace_back
#define mp make_pair
#define in insert
#define fi first
#define sc second
#define b begin
#define e end
#define er erase
#define l length
#define c clear
#define si size
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
const double pi=3.141592653;
const ll infi=1000000001;
const ll MOD=1000000007;
const ll mod=998244353;
const string no="NO\n",yes="YES\n";

int main() {
    fastio
    int t=1;
    cin>>t;
    ll n,m,i,d,val,ans,ind,s,k,j,x,y,q;   
    string s1,s2;

    while(t--){ans=0;
        cin>>n;
        int o,z,on,g1;
        o=on=z=g1=0;
        f(i,n){
            cin>>val;
            if(val==0)  z++;
            else if(val==1) o++;
            else if(val==-1) on++;
            else g1++;
        }
        // if(n==1)    cout<<"yes\n";
        // else{
            if(g1>1)    cout<<"no\n";
            else if(g1==1){
                if(on)  cout<<"no\n";
                else cout<<"yes\n";
            }else{
                if(on>1){
                    if(o)   cout<<"yes\n";
                    else cout<<"no\n";
                }else
                    cout<<"yes\n";
            }
        // }
    }
	return 0;
}