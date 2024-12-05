#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}


    Time add(const Time& other) {
        Time result;
        result.seconds = (seconds + other.seconds) % 60;
        result.minutes = (minutes + other.minutes + (seconds + other.seconds) / 60) % 60;
        result.hours = hours + other.hours + (minutes + other.minutes + (seconds + other.seconds) / 60) / 60;
        return result;
    }

    void display() {
        cout << hours << " hours " << minutes << " minutes " << seconds << " seconds" << endl;
    }
};

int main() {
    int h1, m1, s1, h2, m2, s2;

    cout << "Enter time 1 (hours minutes seconds): ";
    cin >> h1 >> m1 >> s1;

    cout << "Enter time 2 (hours minutes seconds): ";
    cin >> h2 >> m2 >> s2;

    Time time1(h1, m1, s1);
    Time time2(h2, m2, s2);

    Time sum = time1.add(time2);

    cout << "Time 1: ";
    time1.display();

    cout << "Time 2: ";
    time2.display();

    cout << "Sum of both times: ";
    sum.display();

    return 0;
}
