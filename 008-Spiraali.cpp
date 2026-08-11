#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long y, x;
    long long answer = 0;
    cin >> y >> x;

    if (y > x) {
        if (y % 2 == 0) {
            answer = (y * y) - x + 1;
        } else {
            answer = ((y - 1) * (y - 1)) + x;
        }
    } else {
        if (x % 2 == 1) {
            answer = (x * x) - y + 1;
        } else {
            answer = ((x - 1) * (x - 1)) + y;
        }
    }

    cout << answer << "\n";
    
    return 0;
}