#include <iostream>
#include "Equation.h"
#include <stdexcept>

using namespace std;

//Посмотреть какие еще значения могут принимать числа типа double, 
//кроме числовых и написать тест с их использованием на все коэффициенты. 
//solve должен выбрасывать исключение.
int main() {

        auto a = "ab";
        auto b = "bc";
        auto c = "cd";
        double eps = 0.001;
        Equation equation;

        try {
            equation.solve(a,b,c,eps);
        } catch (const std::exception& e) {
            std::cerr << "Коэффициент не является числом. Тест пройден. " << e.what() << std::endl;
            return 0;
        }

        std::cerr << "Тест провален." << std::endl;
        return 1;
}