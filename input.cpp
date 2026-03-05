//
// Created by Александр Добринов on 06.03.2026.
//
#include "input.h"
#include <iostream>

int input() {
    int entry = 0;
    std::cout << "0-Прямоугольник" << std::endl << "1-Треугольник" << std::endl << "2-Окружность" << std::endl;
    if (std::cin >> entry && entry >= 0 && entry < 3)
        ;
    else {
        std::cout << "Ошибка нужны цифры от 0 до 2" << std::endl;
    }

    return entry;
}