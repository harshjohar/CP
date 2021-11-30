#include <iostream>
#define range 5000000

using namespace std;

int main() {
    int n1, n2, n3;
    static int list[range];
    static int resultant[range];
    cin>>n1>>n2>>n3;
    int sum = n1+n2+n3;
    for(int i=0; i<sum; i++) {
        cin>>list[i];
        // resultant[i]=0;
    }
    int index;
    for(int i=0; i<sum; i++) {
        index = list[i];
        resultant[index]++;
    }

    resultant[0]=0;     // important because most of the number will be zero in the list.. only few will get
    int k=0;
    int print[sum];
    for(int i=0; i<range; i++) {
        if(resultant[i] >= 2) {
            print[k] = i;
            k++;
        }
    }
    int length = k;
    cout<<length<<"\n";
    for(int i=0; i<length; i++) {
        cout<<print[i]<<"\n";
    }
    return 0;
}