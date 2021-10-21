
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите массу конфет: " << endl;
    double  a,y,x;
    cin >>x;
    cout << "Введите цену за эту массу:" << endl;
    cin >> a;
    cout << "Введите массу во втором случае:" << endl;
    cin >> y;

    cout << "1 кг стоит "<< a / x <<endl<< y << " кг конфет стоит : "<< (a/x)* y;

    return 0;
}

