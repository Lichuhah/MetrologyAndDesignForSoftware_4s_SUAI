#include "Check.h"
int Check::inputOnlyNumber() {
    int N;
    for (;;) {
        if ((std::cin >> N).good()) return N;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cout << "Неверный ввод, повторите.\n";
        }
        std::cin.ignore(100, '\n');
    }
    return N;
}

int Check::inputOnlyNumberInRange(int left, int right) {
    int N;
    for (;;) {
        if ((std::cin >> N).good() && (left <= N) && (N < right)) return N;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cout << "Неверный ввод, повторите.\n";
        }
        else {
            std::cout << "Число вне допустимого диапазона значений. Повторите ввод.\n";
        }
        std::cin.ignore(100, '\n');
    }
}

double Check::inputOnlyDouble() {
    double N;
    while (!(std::cin >> N) || (std::cin.peek() != '\n'))
    {
        std::cin.clear();
        while (std::cin.get() != '\n');
        std::cout << "Неверный ввод, повторите.\n" << std::endl;
    }
    return N;
}

std::string Check::inputText() {
    std::cin.ignore(100, '\n');
    std::string text;
    std::getline(std::cin, text);
    return text;
}