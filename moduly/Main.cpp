#include <iostream>
#include "sumAandB.hpp" 

int sum = 0;

int sumAandB();

void main() {
    setlocale(LC_ALL, "rus");
    int c;

    int sum = sumAandB();

    std::cout << "Введите значения c через пробел: ";
    std::cin >> c;

    if (c != 0) {
        double result = sum / c;
        std::cout << "Результат вычисления: " << result << std::endl;
    }
    else {
        std::cout << "На ноль делить нельзя" << std::endl;
    }
}