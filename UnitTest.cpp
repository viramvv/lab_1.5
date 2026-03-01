#include "gtest/gtest.h"
#include "Number.h"
#include "Real.h"

// --- Тести для класу Number ---

// Перевірка ініціалізації та отримання значення
TEST(NumberTest, InitAndValue) {
    Number n;
    n.Init(25.5);
    EXPECT_DOUBLE_EQ(n.getValue(), 25.5);
}

// Тест методу множення: перевіряємо, чи правильно рахує добуток
TEST(NumberTest, Multiplication) {
    Number n;
    n.Init(10.0);
    EXPECT_DOUBLE_EQ(n.multiply(3.0), 30.0);
    EXPECT_DOUBLE_EQ(n.multiply(-2.0), -20.0);
}

// Тест методу віднімання
TEST(NumberTest, Subtraction) {
    Number n;
    n.Init(50.0);
    EXPECT_DOUBLE_EQ(n.subtract(10.5), 39.5);
}

// Тест перетворення в рядок
TEST(NumberTest, ToString) {
    Number n;
    n.Init(7.77);
    EXPECT_EQ(n.toString(), "7.77");
}

// --- Тести для класу-контейнера Real ---

// Тест обчислення кореня (головна фішка варіанту)
TEST(RealTest, RootCalculation) {
    Number n;
    n.Init(81.0);

    Real r;
    r.Init(n);

    // Квадратний корінь з 81 = 9
    EXPECT_DOUBLE_EQ(r.root(2), 9.0);
    // Корінь 4-го степеня з 81 = 3
    EXPECT_DOUBLE_EQ(r.root(4), 3.0);
}

// Тест числа Пі в заданому степені
TEST(RealTest, PiPower) {
    Real r;
    // Будь-яке число в 0 степені = 1
    EXPECT_DOUBLE_EQ(r.piPower(0), 1.0);

    // Пі в 1 степені (з точністю до 5 знаків)
    EXPECT_NEAR(r.piPower(1), 3.14159, 0.00001);
}

// Тест композиції: перевірка, чи контейнер коректно тримає об'єкт Number
TEST(RealTest, CompositionLink) {
    Number n;
    n.Init(100.0);

    Real r;
    r.Init(n);

    EXPECT_DOUBLE_EQ(r.getNumber().getValue(), 100.0);
}