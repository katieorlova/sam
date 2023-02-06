#include <iostream>
#include "ex.h"

//ex 3
void fullfilling (int r, int c, int** matrix) {
    srand(time(nullptr));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
}

void print (int r, int c, int** matrix) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void sum_d (int r, int** matrix)
{
    int sum = 0;
    for (int i = 0; i < r; i++) {
        sum += matrix[i][i];
    }

    std::cout << "Сумма элементов главной диагонали матрицы: " << sum << std::endl;
}

//ex 5
int add(int x, int y){
    return x + y;
}

int subtract(int x, int y){
    return x - y;
}

int multiplication(int x, int y){
    return x * y;
}

int division(int x, int y){
    return x / y;
}

int operation(int(*oper)(int, int), int x, int y){
    return oper(x, y);
}