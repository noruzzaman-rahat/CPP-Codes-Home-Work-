#include <iostream>
using namespace std;

class LeapYear {
public:
    int year;
     void getInput() {
        cout << "Enter a year: ";
        cin >> year;
    }

    void checkLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year << " is a leap year." << endl;
        } else {
            cout << year << " is not a leap year." << endl;
        }
    }
};

int main() {
    LeapYear ly;
    ly.getInput();
    ly.checkLeapYear();

    return 0;
}

