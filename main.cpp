//
// Created by Александр Добринов on 06.03.2026.
//
#include <iostream>
#include "enums.h"
#include "math.h"
#include "input.h"


int main() {
    switch (input()) {
        case figures::RACTANGLE:
            std::cout << "прямоугольник";
            break;
        case figures::TRIANGLE:
            math::testTriangle();
            break;
        case figures::CIRCLE:
            //circle();
            break;
    }
}