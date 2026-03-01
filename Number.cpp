#include "Number.h"
#include <iostream>
#include <sstream> // Для роботи зі строковими потоками

using namespace std;

// Метод ініціалізації: задає значення полю
bool Number::Init(double v) {
    setValue(v);
    return true;
}

// Метод для введення даних користувачем
void Number::Read() {
    double v;
    cout << "Введіть число: ";
    cin >> v;
    Init(v); // Викликаємо ініціалізацію після введення
}

// Виведення значення поля на екран
void Number::Display() const {
    cout << "Значення Number: " << value << endl;
}

// Перетворення числа у формат string (вимога завдання)
string Number::toString() const {
    stringstream ss;
    ss << value;
    return ss.str();
}

// Реалізація множення: повертає результат, не змінюючи саме поле
double Number::multiply(double factor) const {
    return value * factor;
}

// Реалізація віднімання
double Number::subtract(double sub) const {
    return value - sub;
}