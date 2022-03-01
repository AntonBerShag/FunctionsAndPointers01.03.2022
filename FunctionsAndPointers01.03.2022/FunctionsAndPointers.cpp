#include <iostream>
using namespace std;

template <typename T> void mySwap(T *num1, T *num2) {
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
template <typename T> void sumArr(T array[], int length, T *num);

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;


	/*cout << "Введите два числа: ";
	cin >> n >> m;
	mySwap(&n, &m);
	cout << n << " " << m << endl;
	bool f1 = false, f2 = true;
	mySwap(&f1, &f2);
	cout << f1 << " " << f2 << endl;*/

	//Задача 1
	cout << "Задача 1\nИзначальный массив:\n[";
	int z1[5] = { 3,5,2,10,0 };
	for (int i = 0; i < 5; i++)
		cout << *(z1 + i) << ", ";
	cout << "\b\b]\n";
	n = 0;
	sumArr(z1, 5, &n);
	cout << "Сумма всех элементов массива = " << n << "\n\n";

	return 0;
}

//Задача 1
template <typename T> void sumArr(T array[], int length, T* num) {
	for (int i = 0; i < length; i++)
		*num += *(array + i); // array[i] = *(array + i);
}