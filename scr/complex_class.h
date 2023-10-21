#pragma once

#include <iostream>


class Complex {
private:
    float real_part;
    float imaginary_part;
public:
    Complex(float r = 0.0f, float i = 0.0f);

    Complex operator+(Complex other);

    Complex operator-(Complex other);

    Complex operator*(Complex other);

    Complex operator/(const Complex& other) const;

    Complex operator^(double power) const;

    friend std::ostream &operator<<(std::ostream &os, const Complex &obj);

    bool operator<(Complex other);

    bool operator>(Complex other);

    bool operator==(Complex other);

    bool operator!=(Complex other);

    bool operator<(float other);

    bool operator>(float other);

    bool operator==(float other);

    bool operator!=(float other);

    bool operator<(int other);

    bool operator>(int other);

    bool operator==(int other);

    bool operator!=(int other);

    float get_length();

    float get_real_part();

    float get_imaginary_part();

    void set_real_part(float r);

    void set_imaginary_part(float i);
};