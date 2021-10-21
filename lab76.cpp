
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите коэфиценты первого уравнений: " << endl;
    int A1, B1, C1, A2, B2, C2;
    cin >> A1 >> B1 >> C1;
    cout << "Введите коэфиценты второго уравнения: " << endl;
    cin >> A2 >> B2 >> C2;
    cout << "x = " << ((C1 * B2) - (C2 * B1)) / ((A1 * B2) - (A2 * B1)) << endl << "y = " << (A1 * C2 - A2 * C1) / ((A1 * B2) - (A2 * B1)) << endl;


    return 0;
}

