#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        // Extract hour and minute
        int hour = stoi(s.substr(0, 2));
        int minute = stoi(s.substr(3, 2));

        
        string period;
        if (hour == 0) {
            hour = 12;
            period = "AM";
        } else if (hour < 12) {
            period = "AM";
        } else if (hour == 12) {
            period = "PM";
        } else {
            hour -= 12;
            period = "PM";
        }

       
        cout << (hour < 10 ? "0" : "") << hour << ":" << (minute < 10 ? "0" : "") << minute << " " << period << endl;
    }

    return 0;
}
