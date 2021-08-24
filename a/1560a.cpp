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
#define debugvi(v) cout<<(#v)<<": "; loop(i, 0, v.size()) cout<<v[i]<<endl; cout<<endl;


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

int req_num(int x) {
    if(x%10==3) return 0;
    int sum_ = 0;
    while(x) {
        sum_ += x%10;
        x/=10;
    }
    if(!(sum_%3)) return 0;
    return 1;
}

int32_t main() {
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
    // #endif
    
    vi numbers;
    loop(i, 1, 2200) {
        if(req_num(i)) {
            numbers.pb(i);
        }
    }
    testcase {
        int k; cin>>k;
        cout<<numbers[k-1]<<endl;
    }
    // cout<<numbers.size()<<endl;
    // debugvi(numbers);
    // cout<<numbers[numbers.size()-1];
    return 0;
}