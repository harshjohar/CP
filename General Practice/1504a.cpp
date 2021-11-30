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

bool checkPalindrome(string str) {
    int n = str.length();
    loop(i, 0, n) {
        if(str[i]!=str[n-i-1]) {
            return false;
        }
    }
    return true;
}

int32_t main() {
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    testcase {
        string str; cin>>str;
        string str1 = 'a'+str;
        if(!(checkPalindrome(str1))) {
            cout<<"YES"<<endl;
            cout<<str1<<endl;
        }
        else {
            string str2 = str+'a';
            if(!(checkPalindrome(str2))) {
                cout<<"YES"<<endl;
                cout<<str2<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}