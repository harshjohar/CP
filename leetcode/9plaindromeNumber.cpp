#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long int places(long long int x) {
        long long int ans= 0, multiple=1;
        if(x%10 == x) {
            return 1;
        } 
        while(true) {
            if(x > multiple) {
                multiple*=10;
                ans+=1;
            } else {
                return ans;
            }
        }
    }
    
    bool isPalindrome(long long int x) {
        if(x<0) {
            return false;
        }
        long long int ulta = 0, number = x;
        long long int size = places(x);
        long long int powOfTen = 1;
        for(long long int i=1; i<size; i++) {
            powOfTen*=10;
        }
        // cout<<powOfTen<<endl;
        for(long long int i=0; i<size; i++) {
            ulta += (x%10)*powOfTen;
            x/=10;
            powOfTen/=10;
        }
        // cout<<ulta<<endl;
        if(ulta == number) {
            return true;
        } else {
            return false;
        }
    }
};
long long int main() {
    Solution S;
    long long int x = 10011;
    // cout<<S.places(x)<<endl;
    cout<<S.isPalindrome(x)<<endl;
    return 0;
}