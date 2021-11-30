#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
		int n, k; cin>>n>>k; int ans;
		int weights[n];
		for(int i=0; i<n; i++) {
			cin>>weights[i];
		}
		sort(weights, weights+n);
		int sum1 = 0, sum2 = 0;
		for(int i=0; i<n; i++) {
			if(i<k) sum1+=weights[i];
			else sum2+=weights[i];
		}
		int ans1 = abs(sum1-sum2);
		sum1 = 0; sum2 =0;
		for(int i=n-1; i>=0; i--) {
			if(i>n-k-1) sum1+=weights[i];
			else sum2 += weights[i];
		}
		int ans2 = abs(sum1-sum2);
		if(ans1 > ans2) ans = ans1;
		else ans = ans2;
		// cout<<ans1<<' '<<ans2<<endl;
		// int ans = max(ans1, ans2);
		cout<<ans<<endl;
	}
}