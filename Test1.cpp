#include <iostream>
#include "Equation.h"

using namespace std;

//Тест, который проверяет, что для уравнения x^2+1 = 0 корней нет (возвращается пустой массив)
int main() {

        double a = 1;
        double b = 0;
        double c = 1;
        double eps = 0.001;
        Equation equation;

        if (equation.solve(a,b,c,eps).empty()){
            cout << "x^2+1 = 0 не имеет корней. Тест пройден." << std::endl;
        } 
        else {
            std::cerr << "Тест провален!" << std::endl;
            return 1;
        }

    return 0;
}
