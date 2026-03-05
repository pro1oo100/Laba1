#include <cmath>
#include <iomanip>
#include <iostream>

#include "math.h"

enum figures {
    RACTANGLE,
    TRIANGLE,
    CIRCLE,
};
int input();
void circle();
void testTriangle();
int main() {
    switch (input()) {
        case figures::RACTANGLE:
            std::cout << "прямоугольник";
            break;
        case figures::TRIANGLE:
            testTriangle();
            break;
        case figures::CIRCLE:
            circle();
            break;
    }
}
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

void testTriangle() {
    double a, b, c;

    std::cout << "Введите стороны: ";
    std::cin >> a >> b >> c;

    math::Triangle triangle(a, b, c);

    triangle.print();

    std::cout << "Пермитер: " << triangle.Perimeter() << std::endl;
    std::cout << "Площадь (Формула герона): " << triangle.Area() << std::endl;
    std::cout << "Проверка на равнобедренность: " << triangle.IsEqualSized() << std::endl;
}

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