#include <iostream>
using namespace std;

void print(int(*)[4], int);

int main(void)
{
    int matrix [3][4] = {{10, 11, 12, 13}, {20, 21, 22, 23}, {31, 32, 33, 34}};
    print(matrix, 3);
    return 0;
}

void print(int (*matrix)[4], int rows)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < 4; j++)
            cout << matrix[i][j] << '\t';
        cout << endl;
    }
}