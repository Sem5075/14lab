#include <iostream>
#include <cmath>
bool isPrime(int num);
void yArray(int* X, int N, int* Y, int& k);
float primeAvg(int* arr, int size);
using namespace std;

int main() {
    int N;
    srand((time(0)));
    cout << "Программа записывает все положительные числа из массива X в масств Y и считает среднее арифметическое простых чисел в массивах\n";
    cout << "Введите размер массива X: ";
    cin >> N;
    int* X = new int[N];
    int* Y = new int[N];
    int k = 0;
    cout << "\nМассив X: ";
    for (int i = 0; i < N; i++) {
        X[i] =  rand() % 201 - 100 ; 
        cout << X[i] << " ";
    }
    yArray(X, N, Y, k);
    cout << "\nМассив Y: ";
    for (int i = 0; i < k; i++) {
        cout << Y[i] << " ";
    }
    cout << endl;
    float avgX = primeAvg(X, N);
    float avgY = primeAvg(Y, k);
    cout << "Среднее простых в X: "<< avgX << endl
    << "Среднее простых в Y: "<< avgY;
    delete[] X;
    delete[] Y;
    return 0;
}

void yArray(int* X, int N, int* Y, int& k) {
    k = 0;
    for (int i = 0; i < N; i++) {
        if (X[i] > 0) {
            Y[k++] = X[i];
        }
    }
}

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

float primeAvg(int* arr, int size) {
    int sum = 0, count = 0;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            sum += arr[i];
            count++;
        }
    }
    return count == 0 ? 0.0 : (double)sum / count;
}