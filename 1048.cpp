#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salary, new_salary, increase;
    int percentage;

    cin >> salary;

    if (salary >= 0.0 && salary <= 400.00) {
        percentage = 15;
    } else if (salary <= 800.00) {
        percentage = 12;
    } else if (salary <= 1200.00) {
        percentage = 10;
    } else if (salary <= 2000.00) {
        percentage = 7;
    } else {
        percentage = 4;
    }

    increase = salary * percentage / 100.0;
    new_salary = salary + increase;

    cout << std::fixed << std::setprecision(2);
    cout << "Novo salario: " << new_salary << "\n";
    cout << "Reajuste ganho: " << increase << "\n";
    cout << "Em percentual: " << percentage << " %\n";

    return 0;
}

