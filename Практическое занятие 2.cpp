
#include <iostream> // Используем заголовочный файл потока ввода/вывода
#include <cmath> // Используем заголовочный файл математических функций


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
#include <iostream>
#include <limits>
#include <stdexcept>

// Метод расчёта площади прямоугольника
double rectangleArea(double a, double b) {
    if (a <= 0.0 || b <= 0.0) {
        throw std::invalid_argument("Стороны прямоугольника должны быть положительными.");
    }
    return a * b;
}

int main() {
    std::cout << "Расчёт площади прямоугольника (macOS, C++)\n";
    std::cout << "Введите длины сторон a и b (положительные числа).\n\n";

    while (true) {
        double a, b;

        std::cout << "a = ";
        if (!(std::cin >> a)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода для a. Попробуйте ещё раз.\n";
            continue;
        }

        std::cout << "b = ";
        if (!(std::cin >> b)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода для b. Попробуйте ещё раз.\n";
            continue;
        }

        try {
            double area = rectangleArea(a, b);
            std::cout << "Площадь прямоугольника: " << area << "\n";
        } catch (const std::exception& e) {
            std::cout << "Ошибка: " << e.what() << "\n";
        }

        std::cout << "Продолжить? (y/n): ";
        char cont;
        if (!(std::cin >> cont) || (cont != 'y' && cont != 'Y')) {
            break;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\n";
    }

    std::cout << "Программа завершена.\n";
    return 0;
}

        return 0;
    }

    // Подзадача 4
    static double TriangleArea(double first, double second, double third)
#include <iostream>
#include <limits>
#include <stdexcept>
#include <cmath>

// Метод расчёта площади треугольника по формуле Герона
double triangleAreaHeron(double a, double b, double c) {
    // Проверка на положительность сторон
    if (a <= 0.0  b <= 0.0  c <= 0.0) {
        throw std::invalid_argument("Стороны треугольника должны быть положительными.");
    }

    // Проверка неравенства треугольника
    if (a + b <= c  a + c <= b  b + c <= a) {
        throw std::invalid_argument("Такие стороны не образуют треугольник.");
    }

    double p = (a + b + c) / 2.0;              // полупериметр
    double underRoot = p * (p - a) * (p - b) * (p - c);

    // Защита от возможных малых отрицательных значений из-за погрешностей
    if (underRoot < 0.0) {
        underRoot = 0.0;
    }

    return std::sqrt(underRoot);
}

int main() {
    std::cout << "Расчёт площади треугольника по формуле Герона (macOS, C++)\n";
    std::cout << "Введите длины трёх сторон a, b, c (положительные числа).\n\n";

    while (true) {
        double a, b, c;

        std::cout << "a = ";
        if (!(std::cin >> a)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода для a. Попробуйте ещё раз.\n";
            continue;
        }

        std::cout << "b = ";
        if (!(std::cin >> b)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода для b. Попробуйте ещё раз.\n";
            continue;
        }

        std::cout << "c = ";
        if (!(std::cin >> c)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода для c. Попробуйте ещё раз.\n";
            continue;
        }

        try {
            double area = triangleAreaHeron(a, b, c);
            std::cout << "Площадь треугольника: " << area << "\n";
        } catch (const std::exception& e) {
            std::cout << "Ошибка: " << e.what() << "\n";
        }

        std::cout << "Продолжить? (y/n): ";
        char cont;
        if (!(std::cin >> cont) || (cont != 'y' && cont != 'Y')) {
            break;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\n";
    }

    std::cout << "Программа завершена.\n";
    return 0;
}
    {
        return 0;
    }

    // Подзадача 5
    static double TriangleArea(double base, double height)
    {
#include <iostream>
#include <limits>
#include <stdexcept>

// Метод расчёта площади треугольника через основание и высоту
double triangleAreaBaseHeight(double base, double height) {
    if (base <= 0.0 || height <= 0.0) {
        throw std::invalid_argument("Основание и высота должны быть положительными.");
    }
    return 0.5 * base * height;
}

int main() {
    std::cout << "Расчёт площади треугольника через основание и высоту (macOS, C++)\n";
    std::cout << "Введите длину основания b и высоту h (положительные числа).\n\n";

    while (true) {
        double base, height;

        std::cout << "Основание b = ";
        if (!(std::cin >> base)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода для основания. Попробуйте ещё раз.\n";
            continue;
        }

        std::cout << "Высота h = ";
        if (!(std::cin >> height)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода для высоты. Попробуйте ещё раз.\n";
            continue;
        }

        try {
            double area = triangleAreaBaseHeight(base, height);
            std::cout << "Площадь треугольника: " << area << "\n";
        } catch (const std::exception& e) {
            std::cout << "Ошибка: " << e.what() << "\n";
        }

        std::cout << "Продолжить? (y/n): ";
        char cont;
        if (!(std::cin >> cont) || (cont != 'y' && cont != 'Y')) {
            break;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\n";
    }

    std::cout << "Программа завершена.\n";
    return 0;
}
        return 0;
    }
};

int main()
{
    Console::SetRussianOnWindows();

    // Подзадача 1

    // Для проверки задания: снять комментарии, заполнить методы переменными, 
    // запустить и посмотреть консольный вывод
    //Calculator::Sum(3., 5.);
    // Calculator::CircleArea();
    // Calculator::RectangleArea();
    // Calculator::TriangleArea();
    // Calculator::TriangleArea();

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

int main()
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
                double la_first;
                double la_second;
                cout << "Введите сторону а" << endl;
                cin >> la_first;
                cout << "Введите сторону b" << endl;
                cin >> la_second;
                Calculator::RectangleArea(la_first, la_second);
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
