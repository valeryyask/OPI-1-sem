#include <iostream>
#include "sumAandB.hpp" 

int sum = 0;

int sumAandB();

void main() {
    setlocale(LC_ALL, "rus");
    int c;

    int sum = sumAandB();

    std::cout << "������� �������� c ����� ������: ";
    std::cin >> c;

    if (c != 0) {
        double result = sum / c;
        std::cout << "��������� ����������: " << result << std::endl;
    }
    else {
        std::cout << "�� ���� ������ ������" << std::endl;
    }
}