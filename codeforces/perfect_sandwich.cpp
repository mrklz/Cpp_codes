#include <iostream>
#include <algorithm>

using namespace std;
int min_sandwiches(int a, int b) {
    if (a == 0 || b == 0) return -1; 
    if (a <= b) return -1; 
    return min(b, a-b); 
}
int main() {
    int n, sandwiches=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        sandwiches = min_sandwiches(a, b);
        cout << sandwiches << endl;
    }
    return 0;
}
            
    