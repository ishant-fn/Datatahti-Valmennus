#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string DNA;
    cin >> DNA;
    int maxRepetitions = -1;
    char prevChar = '.';
    int currentRepetetions = 1;

    for (char currentChar : DNA) {
        if (prevChar != currentChar) {
            currentRepetetions = 1;
            prevChar = currentChar;
        }
        maxRepetitions = max(maxRepetitions, currentRepetetions);
        ++currentRepetetions;
    }

    cout << maxRepetitions;
    
    return 0;
}