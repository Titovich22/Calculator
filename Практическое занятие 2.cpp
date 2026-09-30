#include <iostream>
#include <cmath>

#include "Переменные.cpp"
#include "Консоль.cpp"


using namespace std; // Используем стандартную библиоте

/*
    Групповое занятие: совместными усилиями реализовать доп. функции калькулятора

    1) Назначьте руководителя проекта
    Руководитель проекта должен создать репозиторий проекта калькулятора и добавить туда своих напарников.
    Затем распределите подзадачи на каждого участника.

    2) Каждый участник проекта должен запуллить проект из репозитория себе и создать ветку,
    назвать её своим ФИО латиницей, выполнить свою подзадачу в ней, после чего создать
    запрос на слияние ветвей (merge request)

    3) Команда просматривает каждую ветку, оставляет свои комментарии по доработке, если необходимо, затем
    руководитель проекта производит слияние в мастер-ветку. Итоговый проект должен корректно проводить вычисления

    ПОДЗАДАЧИ:

    1. Доработать int main()
        1.1 Вывести в консоль указания пользователю для работы с программой
        1.2 Реализовать ввод трех значений с консоли и хранение этих переменных для других методов
    2. Описать метод рассчёта площади круга
    3. Описать метод рассчёта площади прямоугольника
    4. Описать метод рассчёта площади треугольника по формуле Герона
    5. Описать метод рассчёта площади треугольника через основание и высоту
    \\\\\\\\
    В конце прошу округлять вычисления до двух знаков после запятой, используя
    double rounded = round(value * 100.0) / 100.0 - вернёт число с двумя знаками после запятой
    Помимо вычислений, каждый метод должен делать аккуратный вывод результата в консоль
    */


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
        const double PI = 3.14;

        double area = PI * radius * radius;

        double result = round(area * 100.0) / 100.0;

        cout << "Площадь круга: " << result << endl;

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
    double radius;

    cout << "Введите радиус: ";
    cin >> radius;

    /*cout << "Введите второе значение: ";
    cin >> second;

    cout << "Введите третье значение: ";
    cin >> third;*/

    cout << endl;

    cout << "Вы ввели:" << endl;
    cout << "Первое значение: " << radius << endl;
    //cout << "Второе значение: " << second << endl;
    //cout << "Третье значение: " << third << endl;

    cout << endl;

    // Проверк
    Calculator::CircleArea(radius);

    return 0;
}