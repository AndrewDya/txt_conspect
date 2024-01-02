/*
  Это многострочный комментарий в C++.
  Он может охватывать несколько строк.
*/

// Это однострочный комментарий в C++.

// Включение библиотеки для ввода/вывода.
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Объявление функции перед её использованием.
int addNumbers(int a, int b);

// Структура (структура данных).
struct Point {
    int x;
    int y;
};

// Класс (объектно-ориентированное программирование).
class Circle {
public:
    // Конструктор.
    Circle(double radius) : radius(radius) {}

    // Метод класса.
    double calculateArea() {
        return 3.14 * radius * radius;
    }

private:
    // Поля класса.
    double radius;
};

// Наследование.
class Cylinder : public Circle {
public:
    // Конструктор.
    Cylinder(double radius, double height) : Circle(radius), height(height) {}

    // Метод класса (переопределение метода базового класса).
    double calculateVolume() {
        return calculateArea() * height;
    }

private:
    // Дополнительное поле класса.
    double height;
};

int main() {
    // Вывод текста на экран.
    cout << "Привет, мир!" << endl;

    // Объявление переменных и присваивание значений.
    int x = 5;
    double y = 3.14;
    char ch = 'A';

    // Операторы и арифметика.
    int sum = x + 10;
    double product = x * y;
    int remainder = x % 2;

    // Условные операторы.
    if (x > 0) {
        cout << "x положительное число" << endl;
    } else if (x < 0) {
        cout << "x отрицательное число" << endl;
    } else {
        cout << "x равно нулю" << endl;
    }

    // Циклы.
    for (int i = 0; i < 5; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // Массивы.
    int numbers[] = {1, 2, 3, 4, 5};
    cout << "Первый элемент массива: " << numbers[0] << endl;

    // Функции.
    int result = addNumbers(3, 4);
    cout << "Сумма: " << result << endl;

    // Использование вектора (динамический массив).
    vector<int> numbersVector = {1, 2, 3, 4, 5};

    // Цикл по вектору.
    for (int num : numbersVector) {
        cout << num << " ";
    }
    cout << endl;

    // Строки и операции со строками.
    string greeting = "Hello";
    string name = "World";
    string fullGreeting = greeting + " " + name;
    cout << fullGreeting << endl;

    // Использование структуры.
    Point p1 = {10, 20};
    cout << "Point coordinates: (" << p1.x << ", " << p1.y << ")" << endl;

    // Использование класса и его метода.
    Circle circle(5.0);
    cout << "Circle area: " << circle.calculateArea() << endl;

    // Использование наследования.
    Cylinder cylinder(3.0, 8.0);
    cout << "Cylinder volume: " << cylinder.calculateVolume() << endl;

    return 0;
}

// Определение функции.
int addNumbers(int a, int b) {
    return a + b;
}
