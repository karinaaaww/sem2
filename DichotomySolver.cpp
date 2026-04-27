#include "DichotomySolver.h"
#include <iostream>
#include <cstdlib>
double DichotomySolver::solve(const double a, const double b, const double step, double (*f)(double)) const
{
    if (a >= b)
    {
        std::cout << "Ошибка! Левая граница должна быть меньше правой.\n";
        exit(1);
    }
    if (step <= 0)
    {
        std::cout << "Ошибка! Точность должна быть положительной.\n";
        exit(1);
    }
    if (f(a) * f(b) > 0)
    {
        std::cout << "Ошибкa! Функция не меняет знак на концах отрезка.\n";
        exit(1);
    }
    double left = a;
    double right = b;
    double mid = 0;
    while ((right - left) > step)
    {
        mid = left + (right - left) / 2.0;
        if (f(left) * f(mid) <= 0)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }

    return left + (right - left) / 2.0;
}
