#pragma once
/**
 * @brief Абстрактный базовый класс Нахождение корней функции на заданном интервале
 */
class Solver
{
public:
    virtual ~Solver() = default;
    /**
     * @brief Абстрактный метод решения
     * @param a левая граница интервала
     * @param b правая граница интервала
     * @param step точность расчета
     * @param f заданная функция
     * @return найденный корень
     */
    virtual double solve(const double a, const double b, const double step, double (*f)(double)) const = 0;
};
