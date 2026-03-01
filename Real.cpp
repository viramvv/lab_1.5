#include "Real.h"
#include <iostream>
#include <cmath>   // Для функцій pow() та M_PI
#include <string>

using namespace std;

// Ініціалізація контейнера об'єктом Number
bool Real::Init(Number n) {
    setNumber(n);
    return true;
}

// Метод Read використовує ДЕЛЕГУВАННЯ: викликає Read вкладеного об'єкта
void Real::Read() {
    cout << "Заповнення даних для контейнера Real:" << endl;
    Number n;
    n.Read(); // Викликаємо метод класу Number
    Init(n);
}

// Метод Display також використовує делегування
void Real::Display() const {
    cout << "Контейнер Real [ ";
    number.Display(); // Викликаємо Display класу Number
    cout << " ]" << endl;
}

string Real::toString() const {
    return "Об'єкт Real з числом: " + number.toString();
}

// Обчислення кореня степеня degree
double Real::root(int degree) const {
    if (degree == 0) return 1;
    // Перевірка на від'ємне число під парним коренем
    if (number.getValue() < 0 && degree % 2 == 0) {
        cout << "Помилка: корінь парного степеня з від'ємного числа!" << endl;
        return 0;
    }
    // Корінь степеня n — це число в степені 1/n
    return pow(number.getValue(), 1.0 / degree);
}

// Обчислення числа Пі в степені degree
double Real::piPower(int degree) const {
    const double PI = 3.14159265358979;
    return pow(PI, degree);
}