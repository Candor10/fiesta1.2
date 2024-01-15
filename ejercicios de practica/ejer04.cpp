#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Ingrese tres numeros separados por espacios: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << "El maximo es: " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "El maximo es: " << num2 << endl;
    } else {
        cout << "El maximo es: " << num3 << endl;
    }

    return 0;
}
