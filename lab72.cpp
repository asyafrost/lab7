
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите величину угла в радианах (от 0 до 2*P):"<<endl;
    double P = 3.14, x;
    cin >> x;
    cout << "Угол равен  ";
    cout << x / (P / 180);
    cout << " градусов ";

    return 0;
}
