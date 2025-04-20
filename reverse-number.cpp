#include <iostream>
using namespace std;

class ReverseNumber {
public:
    int num;

    void getInput() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void findReverse() {
        int original = num;
        int reversed = 0, digit;

        while (original > 0) {
            digit = original % 10;
            reversed = reversed * 10 + digit;
            original /= 10;
        }

        cout << "Reversed number: " << reversed << endl;
    }
};

int main() {
    ReverseNumber r;
    r.getInput();
    r.findReverse();

    return 0;
}

