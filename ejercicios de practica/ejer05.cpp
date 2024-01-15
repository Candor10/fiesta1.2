#include <iostream>
using namespace std;
int main() {
    int year;

    cout << "Ingrese un año: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " es un año bisiesto." << endl;
    } else {
        cout << year << " no es un año bisiesto." << endl;
    }

    return 0;
}
