#include <iostream>
#include "mycomplex.h"

using namespace std;

int main() {
    // ������������ ������ ����������� �����
    Complex a, b(-4), c(23.0, 45.9);

    cout << "Initial values:\n";
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    // �������� ����������� �����
    a = b + c;
    cout << "After a = b + c:\n";
    cout << "a = " << a << endl;

    // ��������� ����������� �����
    Complex m = b - c;
    cout << "After m = b - c:\n";
    cout << "m = " << m << endl;

    // ��������� ����������� �����
    cout << "m * a = " << m * a << endl;

    // ������� ������������ ����� �� ������������ �����
    cout << "m / 4.45 = " << m / 4.45 << endl;

    // ���� ������ ������������ �����
    Complex d;
    cout << "Enter a complex number (d): ";
    cin >> d;

    // ���������� �������� += � ����������� �������
    a += c + d;

    cout << "Results after a += c + d:\n";
    cout << "d = " << d << "\n";
    cout << "a = " << a << endl;

    return 0;
}
