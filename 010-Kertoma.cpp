#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n = 0;
    long long answer = 0;
    long long divisor = 5;
    cin >> n;
    
    while (divisor <= n) {
        answer += n / divisor;
        divisor *= 5;
    }

    cout << answer;
    
    return 0;
}