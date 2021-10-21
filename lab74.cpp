
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");

	int V1, V2, S, T;

	cout << "Введите две скорости(км/ч): " << endl;
	cin >> V2 >> V1;

	cout << "Введите изначальное расстояние(км): " << endl;
	cin >> S;

	cout << "Время движения (ч): " << endl;
	cin >> T;

	cout << (V2 + V1) * T + S;

	return 0;
}

