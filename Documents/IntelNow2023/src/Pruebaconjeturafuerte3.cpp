#include <iostream>
#include <vector>
#include <algorithm>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

std::vector<int> getPrimes(int limit) {
    std::vector<int> primes;
    for (int i = 2; i <= limit; i++)
        if (isPrime(i)) primes.push_back(i);
    return primes;
}

void printGoldbach(int num, const std::vector<int>& primes) {
    std::vector<int>::const_iterator it;
    for (it = primes.begin(); it != primes.end(); ++it) {
        int complement = num - *it;
        if (std::binary_search(primes.begin(), primes.end(), complement)) {
            std::cout << num << " = " << *it << " + " << complement << std::endl;
            return;
        }
    }
}

int main() {
    int Numero;
    std::cout << "Ingrese un número par mayor que 2: ";
    std::cin >> Numero;

    if (Numero % 2 != 0 || Numero <= 2) {
        std::cout << "El número debe ser par mayor que 2." << std::endl;
        return 1;
    }

    std::vector<int> primes = getPrimes(Numero);
    std::sort(primes.begin(), primes.end()); // Ordenar el vector de números primos
    printGoldbach(Numero, primes);

    return 0;
}
