#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    // int gcd(int x, int y) {
    //     if(y==0) {
    //         return x;
    //     }
    //     return gcd(y, x%y);
    // }

    // // juggling
    // void rotate(vector<int>& nums, int k) {
    //     int size = nums.size();
    //     k %= size;
    //     int g_c_d = gcd(size, k);
    //     for(int i=0; i<g_c_d; i++) {

    //     }
    // }
    void reverse(vector<int>&nums, int start, int end) {
        for(int i=start, j=end; i<j; i++, j--) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k %= size;
        // reversing algorithm
        reverse(nums, size-k, size-1);
        reverse(nums, 0, size-k-1);
        reverse(nums, 0, size-1);
    }
};
int main() {
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    int k= 5;
    for(int i=0; i<7; i++) {
        cout<<v[i]<<" ";
    }
    Solution S;
    S.rotate(v, k);
    cout<<endl;
    for(int i=0; i<7; i++) {
        cout<<v[i]<<" ";
    }
    // Solution.rotate(v, k);
    return 0;
}

// 1 2 3 4 5 ; k=2
// 4 5 1 2 3

// 1 2 3 4 5
// 1 2 5 4 3
// 1 4 5 2 3
// 4 1 5 2 3
// 4 5 1 2 3

// 1 2 3 4 5 6 7 ; k=3
// 5 6 7 1 2 3 4


// 1 2 3 4 5 6 7
// 1 2 3 7 5 6 4
// 1 2 6 7 5 3 4
// 1 5 6 7 2 3 4
// 5 1 6 7 2 3 4
// 5 6 1 7 2 3 4
// 5 6 7 1 2 3 4


// 1 2 3 4 5, k=4
// 2 3 4 5 1

// 1 2 3 4 5
// 5 2 3 4 1
// 2 5 3 4 1
// 2 3 5 4 1
// 2 3 4 5 1

// 1 2 3 4 5, k=2
// 1 2 3 5 4
// 3 2 1 5 4 
// 4 5 1 2 3