#include "complex_class.h"
#include <cmath>

Complex::Complex(float r, float i) : real_part(r), imaginary_part(i) {}

Complex Complex::operator+(Complex other) {
    Complex result;
    result.real_part = this->real_part + other.real_part;
    result.imaginary_part = this->imaginary_part + other.imaginary_part;
    return result;
}

Complex Complex::operator-(Complex other) {
    Complex result;
    result.real_part = this->real_part - other.real_part;
    result.imaginary_part = this->imaginary_part - other.imaginary_part;
    return result;
}

Complex Complex::operator*(Complex other) {
    Complex result;
    result.real_part = this->real_part * other.real_part - this->imaginary_part * other.imaginary_part;
    result.imaginary_part = this->real_part * other.imaginary_part + other.real_part * this->imaginary_part;
    return result;
}

Complex Complex::operator/(const Complex& other) const{
    if (other.real_part == 0 && other.imaginary_part == 0) {

    }

    float divisor = (other.real_part * other.real_part) + (other.imaginary_part * other.imaginary_part);
    float newReal = ((real_part * other.real_part) + (imaginary_part * other.imaginary_part)) / divisor;
    float newImaginary = ((imaginary_part * other.real_part) - (real_part * other.imaginary_part)) / divisor;
    return Complex(newReal, newImaginary);
}

Complex Complex::operator^(double power) const {
    double magnitude = std::pow(std::sqrt(real_part * real_part + imaginary_part * imaginary_part), power);
    double angle = std::atan2(imaginary_part, real_part) * power;
    return Complex(magnitude * std::cos(angle), magnitude * std::sin(angle));
}

std::ostream &operator<<(std::ostream &os, const Complex &obj) {
    os << "Complex(" << obj.real_part << "f, " << obj.imaginary_part << "f)";
    return os;
}

bool Complex::operator<(Complex other) {
    return this->get_length() < other.get_length();
}

bool Complex::operator>(Complex other) {
    return this->get_length() > other.get_length();
}

bool Complex::operator==(Complex other) {
    return this->get_length() == other.get_length();
}

bool Complex::operator!=(Complex other) {
    return this->get_length() != other.get_length();
}

bool Complex::operator<(float other) {
    return this->get_length() < other;
}

bool Complex::operator>(float other) {
    return this->get_length() > other;
}

bool Complex::operator==(float other) {
    return this->get_length() == other;
}

bool Complex::operator!=(float other) {
    return this->get_length() != other;
}

bool Complex::operator<(int other) {
    return this->get_length() < other;
}

bool Complex::operator>(int other) {
    return this->get_length() > other;
}

bool Complex::operator==(int other) {
    return this->get_length() == other;
}

bool Complex::operator!=(int other) {
    return this->get_length() != other;
}

float Complex::get_length() {
    return sqrt(pow(this->get_real_part(), 2) + pow(this->get_imaginary_part(), 2));
}

float Complex::get_real_part() {
    return real_part;
}

float Complex::get_imaginary_part() {
    return imaginary_part;
}

void Complex::set_real_part(float r) {
    this->real_part = r;
}

void Complex::set_imaginary_part(float i) {
    this->imaginary_part = i;
}