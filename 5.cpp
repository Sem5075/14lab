#include <iostream>
using namespace std;
void swap(int* a, int* b);
int main() {
    int x, y;
    cout << "Программа меняет два значения используя указатели\n";
    cout << "Введите два числа:\n";
    cin >> x >> y;
    cout << "\nДо обмена:\n";
    cout << "x = " << x << ", y = " << y << endl;
    swap(&x, &y); 
    cout << "\nПосле обмена:\n";
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}