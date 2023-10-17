#include <iostream>
#include <vector>

bool esPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int sumaDigitos(int num) {
    int suma = 0;
    while (num > 0) {
        suma += num % 10;
        num /= 10;
    }
    return suma;
}

int calcularD(int n) {
    std::vector<int> resultados;
    int num = 1;

    while (resultados.size() < n) {
        if (esPrimo(sumaDigitos(num))) {
            resultados.push_back(num);
        }
        num++;
    }

    return resultados.back();
}

int main() {
    int n = 100000000; // n = 10^8

    int resultado = calcularD(n);

    std::cout << "D(" << n << ") = " << resultado << std::endl;

    return 0;
}
