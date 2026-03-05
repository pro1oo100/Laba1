#include "ractangle.h"
void ractangle(){
    double length = 0, width  = 0;


    std::cout << "Длина и ширина прямоугольника" << std::endl;
    if ((std::cin >> length && length > 0) &&
    (std::cin >> width && width > -1)) {
        std::cout << std::fixed << std::setprecision(2) << "Периметр = "
                  << 2 * (length + width) << std::endl;

        std::cout << std::fixed << std::setprecision(2) << "Площадь = "
                  << length * width << std::endl;

        std::cout << std::fixed << std::setprecision(2) << "Диагональ = "
                  <<sqrt(length * length + width * width) << std::endl;
    }
    else {
        std::cout << "Ошибка, сторона должна быть > 0" << std::endl;
    }
}