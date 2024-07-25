#include <iostream>
#include <math.h>
#include <vector>
#include <stdexcept>
#include <type_traits>
#include <sstream>

class Equation {
    public:
    Equation(){};
    //Метод вычисления квадратного уравнения    
    std::vector<double> solve(double a, double b, double c, double eps) 
    {
        // Проверка a = 0
        if (a < eps) {
            throw std::invalid_argument("a не может быть равен нулю");
        }
        // Вычисляем дискриминант
        double discriminant = b  *  b - 4  *  a  *  c;
        std::vector<double> result_vec;
        result_vec.clear();
        // Проверяем, есть ли корни
       if (discriminant > eps) {
            // Корни существуют
            result_vec.push_back((-b - sqrt(discriminant)) / (2  *  a));
            result_vec.push_back((-b + sqrt(discriminant)) / (2  *  a));
        } 
        else if (fabs(discriminant) < eps) {
            // Один корень
            result_vec.push_back(-b / (2  *  a));
        } 
        
        return result_vec;
    };
    //Перегрузка базового метода solve для проверки входных коэффициентов, 
    //которые не являются числами.
    template<typename T>
    std::vector<double> solve(T a, T b, T c, double eps) 
    {
        if (!areAllNumbers(a, b, c)) {
          throw std::invalid_argument("Коэффициенты должны быть числами");
        }
        else {
            return solve(stringToDouble(a),
                         stringToDouble(b),
                         stringToDouble(c),
                         eps);
        }
    }

    private:

    // Функция для проверки, являются ли все параметры числами
    template<typename T>
    bool areAllNumbers(T a, T b, T c) {
        return std::is_arithmetic<T>::value && a != 0 && b != 0 && c != 0;
    }
    // Функция для преобразования строки в double
    double stringToDouble(const char *  str) {  
        std::istringstream iss(str);
        double value;
        iss >> value;
        if (iss.fail()) {
            throw std::invalid_argument("Ошибка входных данных");
        }
        return value;
}

};