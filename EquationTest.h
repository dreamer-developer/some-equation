#include <iostream>
#include "Equation.h"
#include <cassert>

using namespace std;

class EquationTest 
{
    public:
    EquationTest(){       
    };

    void test1()
    {
        double a = 1;
        double b = 0;
        double c = 1;

        //cout << "test1" << " " << equation.solveEquation(a,b,c,eps);

//        if (std::isnan(equation.solveEquation(a,b,c,eps))){
//            cout << "x^2-1 = 0 не имеет корней.";
        assert(!std::isnan(equation.solveEquation(a,b,c,eps)));
//        } 
    }

    private:
    Equation equation;
    double eps = 0.001;

};
