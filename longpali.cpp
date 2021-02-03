#include <iostream>
#include <algorithm>
using namespace std;
// partially submitted
int main() {
    int n;
    cin>>n;
    string text;
    cin>>text;
    for(int i=n; i>=0; i--) {
        for(int j=0; j<=n-i; j++) {
            string sub_text = text.substr(j, i);
            string r = sub_text;
            reverse(sub_text.begin(), sub_text.end());
            int b = sub_text.compare(r);
            if(b==0) {
                cout<<sub_text.length()<<"\n";
                cout<<sub_text<<"\n";
                return 0;
            }
        }
    }
}