#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_
#include <iostream>
using namespace std;

/**
 * @class Complex
 * @brief Класс для представления комплексных чисел.
 *
 * Класс поддерживает операции сложения, вычитания, умножения и деления для комплексных чисел,
 * а также методы для вычисления модуля и конвертации в число с плавающей запятой.
 */
class Complex
{
    double Re; ///< Вещественная часть комплексного числа
    double Im; ///< Мнимая часть комплексного числа

public:
    /**
     * @brief Конструктор для создания комплексного числа.
     *
     * @param aRe Вещественная часть. По умолчанию 0.
     * @param aIm Мнимая часть. По умолчанию 0.
     */
    Complex(double aRe = 0, double aIm = 0);

    /**
     * @brief Конструктор копирования.
     *
     * @param other Другой комплекс для копирования.
     */
    Complex(const Complex& other);

    /**
     * @brief Деструктор.
     */
    ~Complex();

    /**
     * @brief Устанавливает значения вещественной и мнимой частей комплексного числа.
     *
     * @param aRe Вещественная часть.
     * @param aIm Мнимая часть (по умолчанию 0).
     */
    void Set(double aRe, double aIm = 0);

    /**
     * @brief Преобразует комплексное число в вещественное число (модуль).
     *
     * @return Вещественное число (модуль комплексного числа).
     */
    operator double();

    /**
     * @brief Вычисляет модуль комплексного числа.
     *
     * @return Модуль комплексного числа.
     */
    double abs();

    /**
     * @brief Ввод комплексного числа через поток.
     *
     * @param in Поток ввода.
     * @param c Комплексное число для ввода.
     * @return Поток ввода.
     */
    friend istream& operator>>(istream& in, Complex& c);

    /**
     * @brief Вывод комплексного числа через поток.
     *
     * @param out Поток вывода.
     * @param c Комплексное число для вывода.
     * @return Поток вывода.
     */
    friend ostream& operator<<(ostream& out, Complex& c);

    /**
     * @brief Оператор сложения комплексных чисел.
     *
     * @param other Другой комплекс для сложения.
     * @return Результат сложения.
     */
    Complex operator+(const Complex& other);

    /**
     * @brief Оператор вычитания комплексных чисел.
     *
     * @param other Другой комплекс для вычитания.
     * @return Результат вычитания.
     */
    Complex operator-(const Complex& other);

    /**
     * @brief Оператор сложения комплексного числа и вещественного.
     *
     * @param value Вещественное число для сложения.
     * @return Результат сложения.
     */
    Complex operator+(const double& value);

    /**
     * @brief Оператор сложения вещественного числа и комплексного.
     *
     * @param value Вещественное число для сложения.
     * @param c Комплексное число для сложения.
     * @return Результат сложения.
     */
    friend Complex operator+(const double& value, const Complex& c);

    /**
     * @brief Оператор вычитания комплексного числа и вещественного.
     *
     * @param value Вещественное число для вычитания.
     * @return Результат вычитания.
     */
    Complex operator-(const double& value);

    /**
     * @brief Оператор вычитания вещественного числа из комплексного.
     *
     * @param value Вещественное число для вычитания.
     * @param c Комплексное число для вычитания.
     * @return Результат вычитания.
     */
    friend Complex operator-(const double& value, const Complex& c);

    /**
     * @brief Оператор умножения комплексных чисел.
     *
     * @param other Другой комплекс для умножения.
     * @return Результат умножения.
     */
    Complex operator*(const Complex& other);

    /**
     * @brief Оператор умножения комплексного числа и вещественного.
     *
     * @param value Вещественное число для умножения.
     * @return Результат умножения.
     */
    Complex operator*(const double& value);

    /**
     * @brief Оператор умножения вещественного числа и комплексного.
     *
     * @param value Вещественное число для умножения.
     * @param c Комплексное число для умножения.
     * @return Результат умножения.
     */
    friend Complex operator*(const double& value, const Complex& c);

    /**
     * @brief Оператор деления комплексного числа на вещественное.
     *
     * @param value Вещественное число для деления.
     * @return Результат деления.
     */
    Complex operator/(const double& value);

    /**
     * @brief Оператор добавления комплексного числа.
     *
     * @param other Комплексное число для добавления.
     * @return Результат добавления.
     */
    Complex& operator+=(const Complex& other);

    /**
     * @brief Оператор вычитания комплексного числа.
     *
     * @param other Комплексное число для вычитания.
     * @return Результат вычитания.
     */
    Complex& operator-=(const Complex& other);

    /**
     * @brief Оператор умножения комплексного числа.
     *
     * @param other Комплексное число для умножения.
     * @return Результат умножения.
     */
    Complex& operator*=(const Complex& other);

    /**
     * @brief Оператор добавления вещественного числа.
     *
     * @param value Вещественное число для добавления.
     * @return Результат добавления.
     */
    Complex& operator+=(const double& value);

    /**
     * @brief Оператор вычитания вещественного числа.
     *
     * @param value Вещественное число для вычитания.
     * @return Результат вычитания.
     */
    Complex& operator-=(const double& value);

    /**
     * @brief Оператор умножения на вещественное число.
     *
     * @param value Вещественное число для умножения.
     * @return Результат умножения.
     */
    Complex& operator*=(const double& value);

    /**
     * @brief Оператор деления на вещественное число.
     *
     * @param value Вещественное число для деления.
     * @return Результат деления.
     */
    Complex& operator/=(const double& value);

    /**
     * @brief Оператор присваивания для копирования комплексного числа.
     *
     * @param other Комплексное число для копирования.
     * @return Ссылка на текущий объект.
     */
    Complex& operator=(const Complex& other);

    /**
     * @brief Оператор присваивания для присваивания вещественного числа.
     *
     * @param value Вещественное число для присваивания.
     * @return Ссылка на текущий объект.
     */
    Complex& operator=(const double& value);
};

#endif
