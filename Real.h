#pragma once
#include "Number.h" // Підключаємо перший клас для композиції

// Клас-контейнер (реалізує "ціле", що містить "частину")
class Real {
private:
    Number number; // Об'єкт класу Number як поле (це і є КОМПОЗИЦІЯ)

public:
    // Геттер та сеттер для вкладеного об'єкта
    Number getNumber() const { return number; }
    void setNumber(Number n) { number = n; }

    // Обов'язкові методи
    bool Init(Number n);
    void Read();
    void Display() const;
    string toString() const;

    // Методи за варіантом 14
    double root(int degree) const;     // Корінь n-го степеня
    double piPower(int degree) const;  // Число Пі в степені n
};