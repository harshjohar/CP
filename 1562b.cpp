#include<bits/stdc++.h>
using namespace std;
#define int long long int
vector<bool> prime(100);

void is_prime() {
	for(int i=0; i<100; i++) {
		prime[i]=true;
		for(int j=2; j*j<=i; j++) {
			if(i%j==0) {
				prime[i]=false;
			}
		}
	}
}

int32_t main() {
	int t, n; cin>>t;
	string s;
	is_prime();
	while(t--) {
		cin>>n>>s;
		bool kaam_ho_gya=false;
		for(int i=0; i<n; i++) {
			if(s[i]=='1' or s[i]=='4' or s[i]=='6' or s[i]=='8' or s[i]=='9') {
				cout<<1<<endl;
				cout<<s[i]<<endl;
				kaam_ho_gya=true;
				break;
			}
		}
		if(kaam_ho_gya) {
			continue;
		}
		for(int i=0; i<n; i++) {
			for(int j=i+1; j<n; j++) {
				if(!prime[(s[i]-'0')*10 + (s[j]-'0')]) {
					cout<<2<<endl;
					cout<<s[i]<<s[j]<<endl;
					kaam_ho_gya=true;
					break;
				}
			}
			if(kaam_ho_gya) {
				break;
			}
		}
	}
}