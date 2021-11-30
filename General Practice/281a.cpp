#include<iostream>
int main() {
    std::string s; std::cin>>s;
    if(s[0]>=65 and s[0]<=90) {
        std::cout<<s<<std::endl;
    }
    else {
        s[0]-=32;
        std::cout<<s<<std::endl;
    }
}