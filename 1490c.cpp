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

int32_t main() {
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    unordered_set<int> all_cubes;
    int sbse_bada_mai = (int)1e12;
    for(int i=1; i*i*i<=sbse_bada_mai; i++) {
        all_cubes.insert(i*i*i);
    }
    testcase {
        int x; cin>>x;
        bool kaam_ho_gya=false;
        for(int i=1; i*i*i<=x; i++) {
            if(all_cubes.count(x - i*i*i)) {
                cout<<"YES"<<endl;
                kaam_ho_gya=true;
                break;
            }
        }
        if(!kaam_ho_gya) {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}