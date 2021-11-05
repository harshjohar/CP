#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
	int n; cin>>n;
	std::vector<int> v(n);
	for(int i=0; i<n; i++) 
		cin>>v[i];
	int mini, maxi;
	for(int i=0; i<n; i++) {
		if(i==0) {
			mini= abs(v[i]-v[i+1]);
			maxi= abs(v[i]-v[n-1]);
		}
		else if(i==n-1) {
			mini=abs(v[n-1]-v[n-2]);
			maxi=abs(v[n-1]-v[0]);
		}
		else {
			mini = min(abs(v[i]-v[i+1]), abs(v[i]-v[i-1]));
			maxi = max(abs(v[i]-v[n-1]), abs(v[i]-v[0]));
		}
		cout<<mini<<" "<<maxi<<endl;
	}
	return 0;
}