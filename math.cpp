//
// Created by Александр Добринов on 05.03.2026.
//

#include "math.h"
#include <iostream>

namespace math {
    double Triangle::Perimeter() const {
        return this->a + this->b + this->c;
    }

    double Triangle::Area() const {
        double p = this->Perimeter() / 2.0;
        return std::sqrt(p * (p - a) * (p - b) * (p - c));
    }

    bool Triangle::IsEqualSized() const {
        return (a == b) || (a == c) || (b == c);
    }

    void Triangle::print() const {
        std::cout << "Треугольник: a=" << this->a
        << " b=" << this->b << " c=" << this->c << std::endl;
    }

} // math