#include <iostream>
using namespace std;
int main()
{
    float a,b;
    cout << "Программа работает с указателями: если а > b то a увеличивается на 3 и b уменашьется в 3 раза,"<<
    "\nИначe a уменьшается в 2 раза и b увеличивается на 3,\nВведите a и b: ";
    cin >> a >> b;

    float* ptr_a = &a;
    float* ptr_b = &b;
    if (a > b){
        *ptr_a += 3;
        *ptr_b /= 3;
    }else{
        *ptr_a /= 2;
        *ptr_b += 3;
    }
    cout << "Результат:" << endl <<
    "a = " << a << endl <<
    "b = " << b ;
    return 0;
}