#include <iostream>
#include "sumAandB.hpp" 


int main() {
    setlocale(LC_ALL, "rus");
    int c;

    std::cout << "������� �������� c ����� ������: ";
    std::cin >> c;

    sumAandB();

    if (c != 0) {
        int result = sum / c;
        std::cout << "��������� ����������: " << result << std::endl;
    }
    else {
        std::cout << "�� ���� ������ ������" << std::endl;
    }

    return 0;
}