#include <iostream>
#include <string>
#include <cstdlib>
#include "Solver.h"
#include "ForceSolver.h"
#include "DichotomySolver.h"
/**
 * @brief Считывает значение с клавиатуры
 * @param report - строка информации
 * @return считанное значение
 */
double getValue(std::string report = "");
/**
 * @brief Заданная функция для поиска корня
 * @param x аргумент
 * @return значение функции
 */
double myFunc(double x);
/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main()
{
    double a = getValue("Введите левую границу: ");
    double b = getValue("Введите правую границу: ");
    double step = getValue("Введите шаг: ");
    ForceSolver bruteForce;
    DichotomySolver dichotomy;
    double root1 = bruteForce.solve(a, b, step, myFunc);
    std::cout << "Корень по методу перебора равен: " << root1 << std::endl;
    double root2 = dichotomy.solve(a, b, step, myFunc);
    std::cout << "Корень по методу дихтомии равен:  " << root2 << std::endl;
    return 0;
}
double getValue(std::string report)
{
    std::cout << report;
    double value = 0;
    std::cin >> value;
    if (std::cin.fail())
    {
        std::cout << "Ошибка, введено неверное значение.\n";
        exit(1);
    }
    return value;
}
double myFunc(double x)
{
    return x * x - 4.0;
}