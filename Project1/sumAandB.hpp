#include <iostream>

void sumAandB() {
    int a, b, sum = 0;
    std::cout << "Введите значения a, b через пробел: ";
    std::cin >> a >> b;
    sum = a + b;
    std::cout << "Сумма равна : " << sum << std::endl;
}