#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int m, n, c, i, j;
    srand((unsigned)(time(0)));
    cout << "Программа переписывает только первый элемент каждой строки матрицы А который больше С в массив B, если такого нет то записывается ноль\n";
    cout << "Введите количество строк и столбцов: ";
    cin >> m >> n;
    cout << "Введите число C: ";
    cin >> c;

    int A[n][m];
    int B[m];
    for(i = 0; i < m; i++) {
        for( j = 0; j < n; j++) {
            A[i][j] = rand() % 100; 
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    for(i = 0; i < m; i++) {
        int *row_ptr = A[i]; 
        bool found = false;
        for(j = 0; j < n; j++) {
            if(*(row_ptr + j) > c) { 
                B[i] = *(row_ptr + j);
                found = true;
                break;
            }
        }  
        if(!found)   B[i] = 0;
    }

    cout << "Массив B:" << endl;
    for(int i = 0; i < m; i++) {
        cout << B[i] << " ";
    }
    return 0;
}