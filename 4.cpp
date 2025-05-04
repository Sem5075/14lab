#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int N;
    int max = -1; 
    int sum = 0;
    bool nozero = false;
    cout << "Программа генириует случайно заполненный массив, находит в нём максимальный положительный элемент,\n" <<
   "вычисляет сумму элементов и выводит ненулевые элементы в обратном порядке\n";
    cout << "Введите размер массива: ";
    cin >> N;
    int* arr = new int[N];
    srand(time(0)); 

    cout << "Сгенерированный массив: ";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 201 - 100;
        cout << arr[i] << " ";
    }
    cout << endl;
   
    for (int i = 0; i < N; i++) {
        if (arr[i] > 0 && (max == -1 || arr[i] > max)) {
            max = arr[i];
        }
    }
    if (max == -1) {
        cout << "В массиве нет положительных элементов!" << endl;
    } else {
        cout << "Максимальный положительный элемент: " << max << endl;
    }

    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }
    cout << "Сумма элементов массива: " << sum << endl;
    
    cout << "Ненулевые элементы в обратном порядке: ";
    for (int i = N-1; i >= 0; i--) {
        if (arr[i] != 0) {
            cout << arr[i] << " ";
            nozero = true;
        }
    }
    if (!nozero) {
        cout << "В массиве нет ненулевых элементов!";
    }
    cout << endl;
    delete[] arr;
    return 0;
}