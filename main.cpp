//
// Created by Александр Добринов on 06.03.2026.
//
#include <iostream>
#include "enums.h"
#include "math.h"

int main() {
    std::cout << "1-Прямоугольник" << std::endl << "2-Треугольник" << std::endl << "3-Окружность" << std::endl;

    int input;
    std::cin >> input;

    switch (input) {
        case figures::RECTANGLE:
            std::cout << "прямоугольник";
            break;
        case figures::TRIANGLE:
            math::testTriangle();
            break;
        case figures::CIRCLE:
            //circle();
            break;
        default:
            std::cout << "Ошибка нужны цифры от 1 до 3" << std::endl;
    }
}