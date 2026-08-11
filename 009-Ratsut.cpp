#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n = 0;
    long long i = 4;
    long long attacks = 24;
    cin >> n;
    long long combinations = 0;

    if (n == 1) {cout << 0;}
    else if (n == 2) {cout << 6;}
    else if (n == 3) {cout << 28;}
    else {
        while (i <= n) {
            combinations = ((i*i)*((i*i) - 1)) / 2;
            if (i == n) {
                cout << combinations - attacks;
            }
            attacks += 8 * (i - 1);
            ++i;
        }
    }
    
    return 0;
}