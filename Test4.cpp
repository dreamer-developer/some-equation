#include <iostream>
#include "Equation.h"
#include <stdexcept>

using namespace std;

//тест, который проверяет, что коэффициент a не может быть равен 0. В этом случае solve выбрасывает исключение.
int main() {

        double a = 0;
        double b = 2;
        double c = 1;
        double eps = 0.001;
        Equation equation;

        try {
            equation.solve(a,b,c,eps);
        } catch (const std::exception& e) {
            std::cerr << "Коэффициент a = 0. Тест пройден. " << e.what() << std::endl;
            return 0;
        }

        std::cerr << "Тест провален." << std::endl;
        return 1;
}