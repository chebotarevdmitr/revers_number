#include <iostream>
#include <limits> // Для std::numeric_limits

int main(int argc, char** argv) {
    std::cout << "\tthe hello revers numbers\n";
    int n = 0, reversedNumber = 0, remainder = 0;
    std::cout << "\tEnter an integer number: ";
    
    // Проверка ввода
    while (!(std::cin >> n)) {
        std::cin.clear(); // Очистка флага ошибки
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), 'n'); // Пропуск неверного ввода
        std::cout << "\tInvalid input. Please enter an integer number: ";
    }

    // Переворачивание числа
    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    std::cout << "\tReversed number = " << reversedNumber << std::endl;
    return 0;
}