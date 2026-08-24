#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, arrival, departure, mostCustomers = 0, customers = 0;
    cin >> n;
    vector<pair<int, int>> times(n * 2);

    for (int i = 0; i < n; ++i) {
        cin >> arrival >> departure;
        times[i] = {arrival, 1};
        times[i + n] = {departure, -1};
    }
    
    sort(times.begin(), times.end());

    for (pair<int, int> sum : times) {
        customers += sum.second;
        mostCustomers = max(mostCustomers, customers);
    }

    cout << mostCustomers;
    
    return 0;
}