#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string WeekdaysInFinnish[7] = {"maanantai", "tiistai", "keskiviikko", "torstai", "perjantai", "lauantai", "sunnuntai"};

    int day;
    int month;
    int year;

    char dot;

    cin >> day >> dot >> month >> dot >> year;

    --month;
    year -= 1900;

    struct tm date;

    date.tm_year = year;
    date.tm_mon = month;
    date.tm_mday = day;
    date.tm_min = 0;
    date.tm_hour = 0;
    date.tm_sec = 0;
    date.tm_isdst = 1;
    mktime(&date);

    cout << WeekdaysInFinnish[date.tm_wday] << "\n";
    
    return 0;
}