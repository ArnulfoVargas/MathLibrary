// MathClient.cpp : Vargas Mejia Arnulfo
// Esta aplicacion usa la libreria mathlibrary creada por mi
//

#include <iostream>
#include "MathLibrary.h"

int main()
{
    double a = 0, b = 0;

    std::cout << "Ingrese digito a: \n";
    std::cin >> a;

    std::cout << "Ingrese digito b: \n";
    std::cin >> b;

    std::cout << "a + b\n" << MathLibrary::Arithmetic::Add(a, b) << std::endl;
    std::cout << "a - b\n" << MathLibrary::Arithmetic::Substract(a, b) << std::endl;
    std::cout << "a * b\n" << MathLibrary::Arithmetic::Multiply(a, b) << std::endl;
    std::cout << "a / b\n" << MathLibrary::Arithmetic::Divide(a, b) << std::endl;
}