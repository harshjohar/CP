#include <bits/stdc++.h>
using namespace std;
#define int long long int
void stockBuySell(int price[], int n)
{
	if (n == 1)
		return;
    int ans=0;
	int i = 0;
	while (i < n - 1) {
		while ((i < n - 1) && (price[i + 1] <= price[i]))
			i++;
		if (i == n - 1)
			break;
		int buy = i++;
		while ((i < n) && (price[i] >= price[i - 1]))
			i++;
		int sell = i - 1;
        ans-=price[buy];
        ans+=price[sell];
	}
	cout<<ans<<'\n';
}
int32_t main()
{
    int n; cin>>n;
	int price[n];
	for(int i=0; i<n; i++) cin>>price[i];
	stockBuySell(price, n);
	return 0;
}

