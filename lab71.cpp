
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите угол в градусах (от 0 до 360): "<<endl;
    double P = 3.14, x;
    cin >> x;
    cout << "Угол равен : ";
    cout << x / (180 / P);
    cout << " радиан" << endl;

    return 0;
}

