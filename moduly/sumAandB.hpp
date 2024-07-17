#include "iostream"


int sumAandB() {
    int a, b;
    std::cout << "Введите значения a и b через пробел: ";
    std::cin >> a >> b;
    int sum = a + b;

    return sum;
}