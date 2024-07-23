#include <iostream>
#include "Equation.h"

using namespace std;

int main() {

        double a = 1;
        double b = 0;
        double c = 1;
        double eps = 0.001;
        Equation equation;

        if (std::isnan(equation.solveEquation(a,b,c,eps))){
            cout << "x^2-1 = 0 не имеет корней. Тест пройден." << std::endl;
        //assert(!std::isnan(equation.solveEquation(a,b,c,eps)));
        } 
        else {
            std::cerr << "Тест провален!" << std::endl;
            return 1;
        }

    return 0;
}
