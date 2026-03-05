//
// Created by Александр Добринов on 05.03.2026.
//

#ifndef LABA1_MATH_H
#define LABA1_MATH_H
#include <iostream>

namespace math {
    class Triangle {
    private:
        double a, b, c;
    public:
        double Perimeter() const;
        double Area() const;
        bool IsEqualSized() const;
    public:
        void print() const;
    public:
        Triangle(double a, double b, double c) : a(a), b(b), c(c)
        {
            bool isCorrect = (a + b > c && a + c > b && b + c > a);
            if (!isCorrect) {
                throw std::invalid_argument("Треугольник не правильный");
            }
        }
    };
}; // mat

#endif //LABA1_MATH_H