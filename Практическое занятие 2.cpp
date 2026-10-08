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

    static int spl(int a, int b)
    {
        if (b == 0)
        {
            cout << "Делить на ноль нельзя";
            return -1;
        }
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

    //  метод факториала
    static int Factorial(int num)
    {
        if (num < 0) {
            return  0;
        }
        int result = 1;
        for (int i = 2; i <= num; ++i) {
            result *= i;
        }
        // Выводим в консоль рассчёты
        cout << "Факториал: " << result << endl;
        return result;
    }


};

int main()
{
    Console::SetRussianOnWindows();

    while (true)
    {
        int code;
        cout << "Выбери кейс 1-5 " << endl;
        cout << "[1] Площадь круга" << endl;
        cout << "[2] Площадь прямоугольника" << endl;
        cout << "[3] Площадь треугольника (Герон)" << endl;
        cout << "[4] Площадь треугольника" << endl;
        cout << "[5] Факториал" << endl;
        cin >> code;

        if (code == 0) break;

        switch (code)
        {
        case 1:
            double radius;
            cout << "Введите радиус" << endl;
            cin >> radius;
            Calculator::CircleArea(radius);
            break;
        case 2:
            double re_first;
            double re_second;
            cout << "Введите сторону а" << endl;
            cin >> re_first;
            cout << "Введите сторону b" << endl;
            cin >> re_second;
            Calculator::RectangleArea(re_first, re_second);
            break;
        case 3:
            double de_first;
            double de_second;
            double  de_third;
            cout << "Введите сторону а" << endl;
            cin >> de_first;
            cout << "Введите сторону b" << endl;
            cin >> de_second;
            cout << "Введите сторону с" << endl;
            cin >> de_third;
            Calculator::TriangleArea(de_first, de_second, de_third);

            break;
        case 4:
            double base;
            double hight;
            cout << "Введите основание" << endl;
            cin >> base;
            cout << "Введите высоту" << endl;
            cin >> hight;
            Calculator::TriangleArea(base, hight);
            break;
        case 5:
            int num;
            cout << "Введите число" << endl;
            cin >> num;
            Calculator::Factorial(num);
            break;
        default:
            cout << "не верные значения" << endl;
            break;
        }
    }
    {

        Calculator::spl(3, 0);
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
}

struct RussianInit {
    RussianInit() { Console::SetRussianOnWindows(); }
} russianInitInstance;
