#include "ForceSolver.h"
#include <iostream>
#include <cstdlib>
#include <cfloat>
double ForceSolver::solve(const double a, const double b, const double step, double (*f)(double)) const
{
    if (a >= b)
    {
        std::cout << "Ошибка. Левая граница должна быть меньше правой.\n";
        exit(1);
    }
    if (step <= 0)
    {
        std::cout << "Ошибка. Шаг должен быть положительным.\n";
        exit(1);
    }
    double x = a;
    while (x <= b + DBL_EPSILON)
    {
        if (f(x) * f(x + step) <= 0)
        {
            return x + step / 2.0;
        }
        x += step;
    }
    std::cout << "Ошибка. Корень на заданном отрезке не найден.\n";
    exit(1);
}
