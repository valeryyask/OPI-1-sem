#include <iostream>
#include "sumAandB.hpp" 


int main() {
    setlocale(LC_ALL, "rus");
    int c;

    std::cout << "Введите значения c через пробел: ";
    std::cin >> c;

    sumAandB();

    if (c != 0) {
        int result = sum / c;
        std::cout << "Результат вычисления: " << result << std::endl;
    }
    else {
        std::cout << "На ноль делить нельзя" << std::endl;
    }

    return 0;
}