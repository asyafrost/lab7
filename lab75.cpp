
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите коэфиценты А и В: "<<endl;
    double A, B;
    cin >> A >> B;
    cout << (-B / A);
    return 0;
}

