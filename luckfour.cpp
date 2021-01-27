#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        string num;
        int count = 0;
        cin>>num;
        for(int i=0; i<num.length(); i++) {
            if(num[i]=='4') {
                count++;
            }
        }
        cout<<count<<endl;
    }  
}