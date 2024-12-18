#include <iostream>
#include "mycomplex.h"

using namespace std;

int main() {
    // Тестирование класса комплексных чисел
    Complex a, b(-4), c(23.0, 45.9);

    cout << "Initial values:\n";
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    // Сложение комплексных чисел
    a = b + c;
    cout << "After a = b + c:\n";
    cout << "a = " << a << endl;

    // Вычитание комплексных чисел
    Complex m = b - c;
    cout << "After m = b - c:\n";
    cout << "m = " << m << endl;

    // Умножение комплексных чисел
    cout << "m * a = " << m * a << endl;

    // Деление комплексного числа на вещественное число
    cout << "m / 4.45 = " << m / 4.45 << endl;

    // Ввод нового комплексного числа
    Complex d;
    cout << "Enter a complex number (d): ";
    cin >> d;

    // Выполнение операций += с несколькими числами
    a += c + d;

    cout << "Results after a += c + d:\n";
    cout << "d = " << d << "\n";
    cout << "a = " << a << endl;

    return 0;
}
