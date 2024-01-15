#include <iostream>

int main() {
    const int cantidadNumeros = 10;
    int numeros[cantidadNumeros];
    int suma = 0;

    // Solicitar al usuario ingresar 10 números enteros
    for (int i = 0; i < cantidadNumeros; ++i) {
        std::cout << "Ingrese el número " << i + 1 << ": ";
        std::cin >> numeros[i];
        suma += numeros[i];
    }

    // Calcular el promedio
    double promedio = static_cast<double>(suma) / cantidadNumeros;

    // Mostrar el promedio
    std::cout << "El promedio de los números ingresados es: " << promedio << std::endl;

    // Contar cuántos números son mayores que el promedio
    int mayoresQuePromedio = 0;
    for (int i = 0; i < cantidadNumeros; ++i) {
        if (numeros[i] > promedio) {
            mayoresQuePromedio++;
        }
    }

    // Mostrar la cantidad de números mayores que el promedio
    std::cout << "Hay " << mayoresQuePromedio << " números mayores que el promedio." << std::endl;

    return 0;
}