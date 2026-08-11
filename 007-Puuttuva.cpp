#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, currentNumber, answer;

    cin >> n;

    answer = (n * (n + 1)) / 2;

    for (int i = 0; i < n - 1; ++i) {
        cin >> currentNumber;
        answer -= currentNumber;
    }

    cout << answer;
    
    return 0;
}