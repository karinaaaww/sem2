#include <iostream>
#include "RightTriangle.h"

/**
 * @brief Считывает катет треугольника с клавиатуры
 * @param reports - строка информации
 * @return 1 при ошибке ввода, при корректном вводе - считанное значение
 * @note Так как дано, что треугольник прямоугольный, проверять правило треугольника не требуется, остаётся проверить
 * только полученные значения на положительность и на то, что введены числа
 */
double getSide(const std::string reports = "");

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main() {
    double side1 = getSide("Enter first side of right triangle:");
    double side2 = getSide("Enter last side of right triangle:");
    RightTriangle newTriangle(side1, side2);
    std::cout<<"Периметр описанного круга равен "<<newTriangle.getLenghtOfRound()<<std::endl;
    std::cout<<"Площадь описанного круга равна "<<newTriangle.getSquareOfRound()<<std::endl;
    return 0;
}

double getSide(const std::string report) {
    std::cout << report << std::endl;
    double side = 0;
    std::cin >> side;
    if (std::cin.fail()) {
        std::cout<<"Ошибка!"<<std::endl;
        exit(1);
    }
    return side;
}
