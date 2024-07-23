#include <iostream>

int main() {
    int a = 2;
    int b = 2;

    if (a + b == 5) {
        std::cout << "Тест пройден успешно!" << std::endl;
    } else {
        std::cerr << "Тест провален!" << std::endl;
        return 1; // Возвращаем ненулевой код, чтобы указать на провал теста
    }

    return 0; // Возвращаем нулевой код, если тест пройден
}
