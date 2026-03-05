#include <iostream>
#include "circle.h"

void circle() {
    double radius = 0;
    int corner = 0;
    float pi = 3.14;
    std::cout
        << "Радиус окружности и угол в градусах для поиска площади сектора"
        << std::endl;
    if ((std::cin >> radius && radius > 0) &&
        (std::cin >> corner && corner > -1)) {
        std::cout << std::fixed << std::setprecision(2) << "Длина окружности - "
                  << 2 * pi * radius << std::endl;
        std::cout << std::fixed << std::setprecision(2) << "Площадь круга - "
                  << pi * radius * radius << std::endl;
        std::cout << std::fixed << std::setprecision(2)
                  << "Площадь кругового сектора - "
                  << pi * radius * radius * corner / 360 << std::endl;
    } else {
        std::cout << "Ошибка радиус больше 0 и угол от 0 градусов" << std::endl;
    }
}
