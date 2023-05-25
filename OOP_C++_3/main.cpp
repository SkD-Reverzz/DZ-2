#include <iostream>
#include <conio.h>
#include "fraction.h"

using namespace std;

int main() 
{
    Fraction fraction1, fraction2, result;

    cout << "Enter Fraction 1:" << endl;
    fraction1.inputFraction();

    cout << "\nEnter Fraction 2:" << endl;
    fraction2.inputFraction();

    cout << "\nFraction 1: ";
    fraction1.displayFraction();

    cout << "\nFraction 2: ";
    fraction2.displayFraction();

    // Сложение
    result = fraction1.add(fraction2);
    cout << "\nAddition Result: ";
    result.displayFraction();

    // Вычитание
    result = fraction1.subtract(fraction2);
    cout << "\nSubtraction Result: ";
    result.displayFraction();

    // Умножение
    result = fraction1.multiply(fraction2);
    cout << "\nMultiplication Result: ";
    result.displayFraction();

    // Деление
    result = fraction1.divide(fraction2);
    cout << "\nDivision Result: ";
    result.displayFraction();

    return 0;
}