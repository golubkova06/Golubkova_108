#include <iostream>
#include <iomanip>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int arr[10];
	int i;
	int n;

	srand(time(NULL));

	for (i = 0;i < 10;i++) {
		arr[i] = rand() % 201 - 100;
		cout << setw(10) << arr[i];
	}
	cout << endl;
	n = 0;
	for (i = 0;i < 10;i++) {
		if (arr[i] < 0) {
			n++;
		}
	}
	cout << "Кількість від'ємних чисел: " << n << endl;

	system("pause");
	return 0;
}
