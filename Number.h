#pragma once
#include <string>

using namespace std;

// Клас-оболонка для типу double
class Number {
private:
    double value; // Поле для зберігання числового значення

public:
    // Константний метод зчитування (геттер)
    double getValue() const { return value; }

    // Метод запису (сеттер)
    void setValue(double v) { value = v; }

    // Прототипи обов'язкових методів
    bool Init(double v);        // Ініціалізація
    void Read();                // Введення з клавіатури
    void Display() const;       // Виведення на екран
    string toString() const;    // Перетворення у рядок

    // Методи за варіантом 14
    double multiply(double factor) const; // Множення
    double subtract(double sub) const;    // Віднімання
};