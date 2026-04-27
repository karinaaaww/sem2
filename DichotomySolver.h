#pragma once
#include "Solver.h"
/**
 * @brief Класс Решатель методом дихотомии
 */
class DichotomySolver : public Solver
{
public:
    /**
     * @brief Метод решения дихотомией
     * @param a левая граница интервала
     * @param b правая граница интервала
     * @param step точность
     * @param f заданная функция
     * @return найденный корень
     */
    double solve(const double a, const double b, const double step, double (*f)(double)) const override;
};