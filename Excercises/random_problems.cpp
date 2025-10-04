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

//Start coding here

int main(){
    init

    int n; cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; ++i) cin>>a[i];
    float ans = 0;

    sort(a.begin(), a.end());

    for (int i=0; i<n-1; ++i){
        int tempt = (a[i+1] - a[i]);
        ans += sqrt(tempt*tempt+1);
    }

    cout<<fixed<<setprecision(6)<<ans;
    return 0;
}