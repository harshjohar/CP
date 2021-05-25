#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string scores;
        cin>>scores;
        int goal_a=0;
        int goal_b=0;
        // int max = 0;
        for(int i=1; i<=2*n; i++) {
            if(scores[i] == 1 && i%2!=0) {
                goal_a++;
            }
            else if(scores[i]==1 && i%2 == 0) {
                goal_b++;
            }
            if(goal_a > goal_b) {
                if(goal_a > n-goal_a+goal_b) {
                    cout<<i<<"\n";
                }
            }
            else if (goal_b>goal_a) {
                if(goal_b > n+goal_a-goal_b) {
                    cout<<i<<"\n";
                }
            }
            
        }
    }
}