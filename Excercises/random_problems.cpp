#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(0);

//                            _
//                         _ooOoo_
//                        o8888888o
//                        88" . "88
//                        (| -_- |)
//                        O\  =  /O
//                     ____/`---'\____
//                   .'  \\|     |//  `.
//                  /  \\|||  :  |||//  |
//                 /  _||||| -:- |||||_  |
//                 |   | \\\  -  /'| |   |
//                 | \_|  `\`---'//  |_/ |
//                 \  .-\__ `-. -'__/-.  /
//               ___`. .'  /--.--\  `. .'___
//            ."" '<  `.___\_<|>_/___.' _> \"".
//           | | :  `- \`. ;`. _/; .'/ /  .' ; |
//           \  \ `-.   \_\_`. _.'_/_/  -' _.' /
// ===========`-.`___`-.__\ \___  /__.-'_.'_.-'============
//                         `=--=-'        
//                         o~69~o
//             ===============================           
//             ~Peace in mind, peace in files~
//             ===============================

//Start coding

int main(){
    init

    int x,y,m; cin>>x>>y>>m;

    int up = x*y + x + y + 1;
    int down = m + 1;

    int N = up/down -1;

    cout<<N;
    return 0;
}