#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
    int second, minute, hour;

public:
    Time() : second(0), minute(0), hour(0) {}

    void setSecond(int s) {
        second = (s >= 0 && s < 60) ? s : 0;
    }

    void setMinute(int m) {
        minute = (m >= 0 && m < 60) ? m : 0;
    }

    void setHour(int h) {
        hour = (h >= 0 && h < 24) ? h : 0;
    }

    void setTime(int h, int m, int s) {
        setSecond(s);
        setMinute(m);
        setHour(h);
    }

    void displayBy24Hour() {
        cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
    }

    void incrementTime() {
        second++;
        if (second >= 60) {
            second = 0;
            minute++;
            if (minute >= 60) {
                minute = 0;
                hour++;
                if (hour >= 24) {
                    hour = 0;
                }
            }
        }
    }
};

int main() {
    Time t;
    t.setTime(23, 59, 58); // Correctly setting the initial time for the sequence you described
    for (int i = 0; i < 5; i++) {
        t.displayBy24Hour(); // First display, then increment
        t.incrementTime();
    }
    return 0;
}
