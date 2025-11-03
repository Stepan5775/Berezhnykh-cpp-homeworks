#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    const int ROWS = 2;
    const int COLS = 2;
    int matrix[ROWS][COLS];
    srand(time(0));
    // массив заполнил случайными числами от 1 до 10 (по условию задания ".. заполнить любыми..", т.е. можно было задать конкретные значения внутри кода, но решил сделать случайные)
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = rand() % 10 + 1;
        }
    }
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Главная диагональ:" << endl;
    for (int i = 0; i < ROWS; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;
    return 0;
}
