#include <iostream>
#include "ex.h"

int main() {

    //ex 3

    int r, c;

    std::cout << "Задание 3" << std::endl;

    std::cout << "Введите количество строк: " << std::endl;
    std::cin >> r;

    std::cout << "Введите количество столбцов: " << std::endl;
    std::cin >> c;

    int** matrix = new int* [r];
    for (int k=0; k < r; ++k)
        matrix[k] = new int;
    fullfilling (r, c, matrix);
    print (r, c, matrix);

    if (r==c) {
        sum_d (r, matrix);
    }
    else {
        std::cout << "Матрица не является квадратной, нельзя вычислить сумму элементов" << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < r; i++)
        delete[] matrix[i];
    delete[] matrix;


    //ex 5
    int x = 0;
    int y = 0;

    std::cout << "Задание 5" << std::endl;

    std::cout << "Введите значение x: " << std::endl;
    std::cin >> x;

    std::cout << "Введите значение y: " << std::endl;
    std::cin >> y;

    char sign = '0';

    std::cout << "Введите знак: " << std::endl;
    std:: cin >> sign;

    if (sign == '+') { std::cout << "Ответ: " << operation (add, x, y); }
    else if (sign == '-') { std::cout << "Ответ: " << operation (subtract, x, y); }
    else if (sign == '*') { std::cout << "Ответ: " << operation (multiplication, x, y); }
    else if (sign == '/') { std::cout << "Ответ: " << operation (division, x, y); }
    else {std::cout << "Вы ввели некоректное значение действия с переменной" << std::endl;}

    return 0;
}
