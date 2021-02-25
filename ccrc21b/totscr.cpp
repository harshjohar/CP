#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n, k;
    cin >> t;
    for(int it = 0; it < t; it++) {
        cin >> n >> k;
        int arr[k] = {};
        for (int ik = 0; ik < k; ik++){
            cin >> arr[ik];
        }
        for (int in = 0; in<n; in++){
            string s;
            long long ans = 0;
            cin >> s;
            for(int ik = 0; ik < k; ik++){
                if (s[ik]=='1'){
                    ans+=arr[ik];
                }
            }
            std::cout << ans << "\n";
        }
    }
    return 0;
}