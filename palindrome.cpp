#include <iostream>
using namespace std;

class Palindrome {
public:
    int num;

    void getInput() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void checkPalindrome() {
        int original = num;
        int reversed = 0, digit;

        while (original > 0) {
            digit = original % 10;
            reversed = reversed * 10 + digit;
            original /= 10;
        }

        if (num == reversed)
            cout << num << " is a palindrome number." << endl;
        else
            cout << num << " is not a palindrome number." << endl;
    }
};

int main() {
    Palindrome p;
    p.getInput();
    p.checkPalindrome();

    return 0;
}

