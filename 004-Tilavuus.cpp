#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double radius;
    cin >> radius;
    double answer = 4 / 3.0 * 3.14159265 * radius * radius * radius;

    cout << fixed << setprecision(10) << answer << "\n";    
    return 0;
}