#include <iostream> // Используем заголовочный файл потока ввода/вывода
#include <cmath> // Используем заголовочный файл математических функций

#include "Переменные.cpp"
#include "Консоль.cpp"

using namespace std; // Используем стандартную библиотеку

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

    В конце прошу округлять вычисления до двух знаков после запятой, используя
    double rounded = round(value * 100.0) / 100.0 - вернёт число с двумя знаками после запятой
    Помимо вычислений, каждый метод должен делать аккуратный вывод результата в консоль
    */

class Calculator
{
public:

    /// <summary>
    /// Вычисляет сумму двух чисел с плавающей запятой
    /// </summary>
    /// <param name="a">Первое значение</param>
    /// <param name="b">Второе значение</param>
    /// <returns>Итоговая сумма</returns>
    static double Sum(double a, double b)
    {
        // Вычисляем
        double sum = a + b;
        // Округляем
        double result = round(sum * 100.0) / 100.0;
        // Выводим в консоль рассчёты
        cout << "Сумма: " << sum << endl;

        return sum;
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
    // Подзадача 2
    static double CircleArea(double radius)
    {
        return 0;
    }

    // Подзадача 3
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
    // Подзадача 1

    // Для проверки задания: снять комментарии, заполнить методы переменными, 
    // запустить и посмотреть консольный вывод
    Calculator::Sum(3., 5.);
    // Calculator::CircleArea();
    // Calculator::RectangleArea();
    // Calculator::TriangleArea();
    // Calculator::TriangleArea();
}
