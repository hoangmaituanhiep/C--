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

    ll n;
    vector<ll> h(n), v(n);
    for(ll i=0; i<n; ++i) cin>>h[i];
    for(ll i=0; i<n; ++i) cin>>v[i];

    ll var[n];
    ll count[n];

    for (ll i=0; i<n; ++i){
        var[i] = v[i];
        count[i] = 1;
        for (ll j=0; j<n; ++j){
            if (h[j] < h[i]){
                if (var[j] + v[i] > var[i]){
                    var[i] = var[j] + v[i];
                    count[i] = count[j] + 1;
                }
                if (var[j] + v[i] == var[i]){
                    count[i] = max(count[i], count[j] + 1);
                }
            }
        }

        ll max_var = var[0];
        ll max_c = count[0];

        for (int i=0; i<n; ++i){
            if (var[i] > max_var){
                max_var = var[i];
                max_c = count[i];
            }
            if (var[i] == max_var && count[i] > max_c){
                max_c = count[i];
            }
        }
        cout<<max_var<<' '<<max_c;
    }
    return 0;
}