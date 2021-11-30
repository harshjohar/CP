#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        int count =0;
        int x;
        for(int i=0; i<n; i++) {
            cin>>x;
            if(x%2==0) count++;
        }
        if(count < k || (count == n && k == 0))
		{
			cout << "NO" << '\n';
		}
		else
		{
			cout << "YES" << '\n';
		}
    }
}