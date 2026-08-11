#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    long long total = 2;
    cin >> n;

    for (int i = 1; i < n; ++i) {
        total = (total * 2) % 1000000007;
    }

    cout << total;
    
    return 0;
}