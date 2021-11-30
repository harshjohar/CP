#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> intpair;

using cd = complex<double>;
const double PI = acos(-1);

void fft(vector<cd> & a, bool invert) {
    int n = a.size();
    if (n == 1)
        return;

    vector<cd> a0(n / 2), a1(n / 2);
    for (int i = 0; 2 * i < n; i++) {
        a0[i] = a[2*i];
        a1[i] = a[2*i+1];
    }
    fft(a0, invert);
    fft(a1, invert);

    double ang = 2 * PI / n * (invert ? -1 : 1);
    cd w(1), wn(cos(ang), sin(ang));
    for (int i = 0; 2 * i < n; i++) {
        a[i] = a0[i] + w * a1[i];
        a[i + n/2] = a0[i] - w * a1[i];
        if (invert) {
            a[i] /= 2;
            a[i + n/2] /= 2;
        }
        w *= wn;
    }
}

vector<int> multiply(vector<int> const& a, vector<int> const& b) {
    vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    int n = 1;
    while (n < a.size() + b.size()) 
        n <<= 1;
    fa.resize(n);
    fb.resize(n);

    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < n; i++)
        fa[i] *= fb[i];
    fft(fa, true);

    vector<int> result(n);
    for (int i = 0; i < n; i++)
        result[i] = round(fa[i].real());
    return result;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    vector<int> A(2*n);
    for(int i=0;i<n;i++){
        cin>>A[i];
        A[n+i]=A[i];
    }

    vector<int> pos;
    int x; 
    for(int i=0;i<m;i++){
        cin>>x;
        pos.push_back(x);
    }

    sort(pos.begin(), pos.end());

    int tmin=pos[0];
    for(int i=0;i<m;i++){
        pos[i]-=tmin;
    }

    int sz=2*n;

    vector<int> B(sz);
    for(int i=0;i<sz;i++){
        B[i]=0;
    }

    for(int i=0;i<m;i++){
        B[pos[i]]=1;
    }

    reverse(B.begin(), B.begin()+n);

    vector<int> sol = multiply(B,A);
    int ans=0;

    for(int i=n-1;i<2*n-1;i++){
        if(sol[i]==m){
            ans++;
        }
    }

    cout<<ans<<"\n";
}