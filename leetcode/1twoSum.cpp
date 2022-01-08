#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        int diff;
        for(int i=0; i<nums.size(); i++) {
            diff = target-nums.at(i);
            if(m.find(diff)!=m.end()) {
                vector<int> v{m[diff], i};
                return v;
            } else {
                m[nums.at(i)] = i;
            }
        }
        return vector<int>{};
    }
};

int main() {
    Solution S;
    // S.twoSum();
    return 0;
}