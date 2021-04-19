#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int x, y, k, n;
        cin>>x>>y>>k>>n;
        int req_pages = x-y;
        int pages[n][2];    // 0 -> pages; 1 -> price
        for(int i=0; i<n; i++) {
            cin>>pages[i][0]>>pages[i][1];
        }
        int flag = 0;
        for(int i=0; i<n; i++) {
            if(pages[i][0] >= req_pages && pages[i][1] <= k) {
                flag++;
            }
        }
        if(flag>0) cout<<"LuckyChef"<<endl;
        else cout<<"UnluckyChef"<<endl;
    }
}