#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lld;
int main() 
{
    lld n;
    cin>>n;
    lld budget[n];
    for(int i=0; i<n; i++) {
        cin>>budget[i];
    }
    sort(budget, budget+n, greater<lld>());
    lld max_revenue = budget[0];
    for(int i=1; i<n; i++) {
        lld curr_rev = budget[i]*(i+1);
        if(curr_rev>max_revenue) {
            max_revenue = curr_rev;
        }
    }
    cout<<max_revenue<<'\n';
}