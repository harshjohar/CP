#include<bits/stdc++.h>

#define int long long
#define ff first
#define ss second
#define inf 8999999999999999999
#define endl '\n'
#define int long long
#define pii std::pair<int, int>
#define vi std::vector<int>
#define vvi std::vector<std::vector<int> >
#define pb(n) push_back(n)
#define mii std::map<int, int>
#define umii std::unordered_map<int, int>
#define si std::set<int>
#define f(i, s, e) for(int i=s;  i<e; i++)
#define fb(i, s, e) for(int i=s; i>=e; i--)
#define pqb std::priority_queue<int>
#define pqs std::priority_queue<int, vi, greater<int> >
// ਹਰਸ਼ਪ੍ਰੀਤ ਸਿੰਘ ਜੌਹਰ 
template<typename T1, typename T2> std::istream &operator >> (std::istream& in, std::pair<T1, T2> &a){in >> a.ff >> a.ss; return in;}
template<typename T1, typename T2> std::ostream &operator << (std::ostream& out, std::pair<T1, T2> a){out << a.ff << ' ' << a.ss; return out;}
template<typename T, typename T1> T amax(T &a, T1 b){if(b > a) a = b; return a;}
template<typename T, typename T1> T amin(T &a, T1 b){if(b < a) a = b; return a;}
template<typename T> std::istream& operator>>(std::istream &in, std::vector<T> &v) { for (auto &x : v) in >> x; return in;}
template<typename T> std::ostream& operator<<(std::ostream &out, std::vector<T> &v) {out << "{ "; for (auto &x : v) out << x << " "; out << "}\n"; return out;}
template<typename T, typename... Args> void prn(T x, Args... args) {std::cout << x << " "; prn(args...);}
template<typename Iterable> void prnIter(const Iterable& ITER, std::ostream&out = std::cout){ auto x = ITER.begin(); out << "{ "; for (; x != ITER.end(); ++x) out << *x << ' '; out << "}" << endl;}


int32_t main() {
    std::cin.tie(0)->sync_with_stdio(0);

    auto __solve_tc = [&](auto __tc_num)->int{
        int n;
        std::cin>>n;

        vi a(n), b(n);
        std::cin>>a>>b;

        int diff = inf;
        f(i, 0, n) {
            if(b[i]!=0) {
                diff = std::min(diff, a[i]-b[i]);
            }
        }

        if(diff<0) {
            std::cout<<"NO"<<endl;
            return 0;
        }

        if(diff==inf) {
            std::cout<<"YES"<<endl;
            return 0;
        }

        f(i, 0, n) {
            if(a[i]-b[i]>diff) {
                std::cout<<"NO"<<endl;
                return 0;
            }

            if(b[i]!=0 and a[i]-b[i]<diff) {
                std::cout<<"NO"<<endl;
                return 0;
            } 
        }

        std::cout<<"YES"<<endl;

        return 0;
    };
    int __tc_cnt;
    std::cin >> __tc_cnt;
    for(auto __tc_num = 0; __tc_num < __tc_cnt; ++ __tc_num){
        __solve_tc(__tc_num);
    }
    return 0;
}