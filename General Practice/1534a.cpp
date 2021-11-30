#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define int long long int
#define pb push_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define loopb(i, a, b) for(int i=a; i>=b; i--)
#define testcase int t; cin>>t; while(t--)
#define pii pair<int, int>
#define mii map<int, int>
#define f first
#define s second
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n";
#define debug(x) cout<<(#x)<<": "<<x<<endl
#define debugvi(v) cout<<(#v)<<": "; loop(i, 0, v.size()) cout<<v[i]<<" "; cout<<endl;


//                                      _________.
//                                  __,-'          `-.
//                          ____,--','           ___  `-__
//         ______ ____,--""'       /           ,'   ``-._-`-.
//       ,'      `-._            ,'          _-              \
//     ,'            `-.__      /          ,'    ___          `,
//    /    ______         `._   |         /   _,<_____-        )
//   /   ,'      `-._        `. |       ,'_,-'     `. `-.      |
//    /    ______         `._   |         /   _,<_____-        )
//   /   ,'      `-._        `. |       ,'_,-'     `. `-.      |
//  /  ,'            `-.___      \     /,'           \   \     |
//  |_/                 ___>,_________,'              \        |
//  /               _,-'  ,' ,'                          `.   /
//  |           __,/    /'  /                              `.')
//  |        ,-'  /    (  ,'                 ________   \    \|
//  |                  | /                   \XXXXXXXXxx_|    |
//  |\                 | |                               |     `._
//  | |          |     \ |______                         |        `-.
//  | `.             __x||XXXXX/                ,--.     |           \
//  (  |         | xxXY"//                    ,'_.,_'//  |           |
//   \ `.       /\     (/                 /   |//d`Bb\  |           |
//   )  )|     /  |        ..--..         |   | \YBBP//   \___      \|
//   \ //    ,'   |     \\.,xxx'\        |   )\_\---'      \ `.      \
//    Y/   ,'     |      |  d"BBb\        \                 \  `.     \
//   ,'  ,'       /\     ( `\BBP'//\                         |\   \    |
//  / _,'        /  \     `,,---'                            | \   |   /
// (,'/              |                       \               |  )   \_/
//  / _,'        /  \     `,,---'                            | \   |   /
// (,'/              |                       \               |  )   \_/
//    |             /|                      _ )              K  )  _/
//   /             / |                  ( -                 ) _/_,'
//   |           ,' ,'\                          ,. ,       K'
//   | _       ,'  /(\ \               ______.,-'_'|       /_
//   |/       /   /  \  `.          `<-_______,-'_'       /  \..___
//    \      |   | \_ `-- `.          `--.____,-'       ,'         `.
//     `._   )              `-.                        /`.           )
//        `._'\                `-._                 _,K   \         /
//           `.>.__       _____,/  `-._           ,'  |\          \/
//                 ``--''"\._   |      `-.____.,-'    | `._        )
//                         / `._|                     |   \`-.__.,'
//                 _______(____/                       \___\__
string st[55];
char chrs[] = {'R', 'W'};
int32_t main() {
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    testcase {
        int n, m;
        cin>>n>>m;
        vi r(2), w(2);
        loop(i, 0, n) {
            cin>>st[i];
            loop(j, 0, m) {
                if(st[i][j]=='R') {
                    r[i+j&1]=1;
                }
                else if(st[i][j]=='W') {
                    w[i+j&1]=1;
                }
            }
        }
        int x = r[1] or w[0];
        int y = w[1] or r[0];
        if(x and y) {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        loop(i, 0, n) {
            loop(j, 0, m) {
                char c = chrs[i+j+x&1];
                cout<<c;
                if(st[i][j]!='.') {
                    assert(st[i][j]==c);    // mission abort if false;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}