#include<iostream>
#include<queue>
#include<string>
//TLE
using namespace std;
typedef long long int lld;
void solve(string inp);
bool isReqAns(string shakki_subsequence, string MyInput);
int main() {
    lld t; cin>>t;
    for(int q=0; q<t; q++) {
        string input; cin>>input;
        int checker = 0;
        int i=0;
        while(i<input.size()) {
            if(input[i]=='0') checker=1;
            i++;
        }
        if(checker==0) cout<<"0"<<'\n';
        else solve(input);
    }
    return 0;
}
void solve(string inp) {
    queue<string> NewDataTypeForMe;
    NewDataTypeForMe.push("1");
    while(true) {
        string s1 = NewDataTypeForMe.front();
        NewDataTypeForMe.pop();
        if(isReqAns(s1, inp)==true){cout<<s1<<'\n'; return;}
        string s2 = s1;
        NewDataTypeForMe.push(s1.append("0"));
        NewDataTypeForMe.push(s2.append("1")); 
    }
}
bool isReqAns(string shakki_subsequence, string MyInput) {
    int k=0;
    for(int i=0; i<MyInput.size(); i++) {
        if(shakki_subsequence[k] == MyInput[i]) k++;
        if(k==shakki_subsequence.size()) return false;
    }
    return true;
}