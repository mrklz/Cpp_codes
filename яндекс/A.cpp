#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;
using ll = long long;
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}
int main() {
    ll a, b, c, n;
    cin >> a >> b >> c >> n;
    ll lab = lcm(a, b), lac = lcm(a, c), lbc = lcm(b, c), labc = lcm(lab, c);
    ll l = 1, r = 1e18, ans = -1;
    while (l<=r){
        ll mid = l + (r-l)/2;
        if(mid/lab + mid/lbc + mid/lac - 3*(mid/labc)>=n){
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}