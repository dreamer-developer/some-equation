#include <iostream>
#include "Equation.h"
#include <vector>

using namespace std;

//тест, который проверяет, что для уравнения x^2-1 = 0 есть два корня кратности 1 (x1=1, x2=-1)
int main() {

        double a = 1;
        double b = 0;
        double c = -1;
        double eps = 0.001;
        Equation equation;

        vector<double> result_vec = equation.solve(a,b,c,eps);
        if ((result_vec.size() == 2) &&
        result_vec.at(0) == -1.0 && result_vec.at(1) == 1.0 ){
          cout << "x^2-1 = 0 имеет 2 корня -1,1. Тест пройден." << std::endl;
        }
        else {
            std::cerr << "Тест провален!" << std::endl;
            return 1;
        }

        return 0;
}
