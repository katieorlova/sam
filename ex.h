#ifndef SAM_EX_H
#define SAM_EX_H

#endif //SAM_EX_H

//ex 3
void fullfilling (int r, int c, int** matrix);

void print (int r, int c, int** matrix);

void sum_d (int r, int** matrix);

//ex 5
int add(int x, int y);

int subtract(int x, int y);

int multiplication(int x, int y);

int division(int x, int y);

int operation(int(*oper)(int, int), int x, int y);