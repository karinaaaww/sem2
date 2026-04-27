#pragma once
#include "Solver.h"
/**
 * @brief Класс Решатель методом перебора
 */
class ForceSolver : public Solver
{
public:
    /**
     * @brief Метод решения перебором
     * @param a левая граница интервала
     * @param b правая граница интервала
     * @param step шаг расчета
     * @param f заданная функция
     * @return найденный корень
     */
    double solve(const double a, const double b, const double step, double (*f)(double)) const override;
};