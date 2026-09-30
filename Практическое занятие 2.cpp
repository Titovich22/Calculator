#include <iostream>
#include <cmath>

#include "Переменные.cpp"
#include "Консоль.cpp"

using namespace std;

class Calculator
{
public:

    static double Sum(double a, double b)
    {
        double sum = a + b;
        double result = round(sum * 100.0) / 100.0;

        cout << "Сумма: " << result << endl;

        return result;
    }

    int Sum(int a, int b)
    {
        int sum = a + b;
        return sum;
    }

    int otr(int a, int b)
    {
        int otr = a - b;
        return otr;
    }

    int mult(int a, int b)
    {
        int mult = a * b;
        return mult;
    }

    int spl(int a, int b)
    {
        int spl = a / b;
        return spl;
    }

    // Подзадача 2
    static double CircleArea(double radius)
    {
        return 0;
    }

    // Подзадача 3
    static double RectangleArea(double first, double second)
    {
        return 0;
    }

    // Подзадача 4
    static double TriangleArea(double first, double second, double third)
    {
        return 0;
    }

    // Подзадача 5
    static double TriangleArea(double base, double height)
    {
        return 0;
    }
};

int main()
{
    Console::SetRussianOnWindows();

    // Подзадача 1.1
    cout << "Калькулятор геометрических фигур" << endl;
    cout << "Введите три числовых значения." << endl;
    cout << endl;

    // Подзадача 1.2
    double first;
    double second;
    double third;

    cout << "Введите первое значение: ";
    cin >> first;

    cout << "Введите второе значение: ";
    cin >> second;

    cout << "Введите третье значение: ";
    cin >> third;

    cout << endl;

    cout << "Вы ввели:" << endl;
    cout << "Первое значение: " << first << endl;
    cout << "Второе значение: " << second << endl;
    cout << "Третье значение: " << third << endl;

    cout << endl;

    // Проверк
    Calculator::Sum(first, second);

    return 0;
}