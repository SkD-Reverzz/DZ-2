#pragma once
#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    void inputFraction() {
        cout << "\Enter numerator: ";
        cin >> numerator;
        cout << "\nEnter denominator: ";
        cin >> denominator;
    }

    Fraction add(const Fraction& other) const {
        Fraction result;
        result.numerator = (numerator * other.denominator) + (other.numerator * denominator);
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction subtract(const Fraction& other) const {
        Fraction result;
        result.numerator = (numerator * other.denominator) - (other.numerator * denominator);
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction multiply(const Fraction& other) const {
        Fraction result;
        result.numerator = numerator * other.numerator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction divide(const Fraction& other) const {
        Fraction result;
        result.numerator = numerator * other.denominator;
        result.denominator = denominator * other.numerator;
        return result;
    }

    void displayFraction() const {
        cout << numerator << "/" << denominator << endl;
    }
};
