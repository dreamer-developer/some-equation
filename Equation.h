#include <iostream>
#include <math.h>

class Equation {
    public:
    Equation(){};
    double solveEquation(double a, double b, double c, double eps) 
    {
        // Вычисляем дискриминант
        double discriminant = b  *  b - 4  *  a  *  c;
        // Проверяем, есть ли корни
        if (fabs(discriminant) > eps) {
            // Корни существуют
            return (-b + sqrt(discriminant)) / (2  *  a), (-b - sqrt(discriminant)) / (2  *  a);
            } 
        else if (fabs(discriminant) < eps) {
            // Один корень
            return -b / (2  *  a), -b / (2  *  a);
        } 
        else {
            // Нет корней
            return std::nan("");
        }
    };

    private:

    bool isEqual(double x, double y, double eps)
    {
        return (fabs(x-y) < eps) ?  true : false;
    }
};