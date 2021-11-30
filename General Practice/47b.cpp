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
    
    string coins;
    vi KatyPerry(3);
    loop(i, 0, 3) {
        cin>>coins;
        if(coins[1]=='>') {
            KatyPerry[coins[2]-'A']++;
        } 
        else {
            KatyPerry[coins[0]-'A']++;
        }
    }
    // debugvi(KatyPerry);
    if(KatyPerry[0]==KatyPerry[1] or KatyPerry[0]==KatyPerry[2] or KatyPerry[1]==KatyPerry[2]) {
        cout<<"Impossible"<<endl;
        return 0;
    }

    // KatyPerry stores the seniority

    vector<pair<int, char>> Firework;
    Firework.pb({KatyPerry[0], 'A'});
    Firework.pb({KatyPerry[1], 'B'});
    Firework.pb({KatyPerry[2], 'C'});

    sort(Firework.begin(), Firework.end());

    loopb(i, Firework.size()-1 , 0) {
        cout<<Firework[i].s;
    }
    cout<<endl;
    return 0;
}