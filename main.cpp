#include <iostream>
#include "Real.h"

using namespace std;

int main() {
    // Налаштування виводу української мови в консолі (для Windows)
    setlocale(LC_ALL, "Ukrainian");

    // 1. Створення та робота з об'єктом-контейнером
    Real myReal;
    myReal.Read();    // Введення
    myReal.Display(); // Виведення

    // 2. Тестування специфічних методів варіанту
    int n;
    cout << "\nВведіть степінь кореня: ";
    cin >> n;
    cout << "Результат кореня степеня " << n << ": " << myReal.root(n) << endl;

    cout << "Введіть степінь для числа Пi: ";
    cin >> n;
    cout << "Пi в степені " << n << " дорівнює: " << myReal.piPower(n) << endl;

    // 3. Демонстрація масиву об'єктів (вимога з фото прикладу)
    cout << "\n--- Робота з масивом об'єктів Number ---" << endl;
    Number mas[2];
    for(int i = 0; i < 2; i++) {
        cout << "Елемент масиву #" << i + 1 << endl;
        mas[i].Read();
    }

    cout << "\nДані масиву через toString():" << endl;
    for(int i = 0; i < 2; i++) {
        cout << "Об'єкт " << i + 1 << ": " << mas[i].toString() << endl;
    }

    return 0;
}