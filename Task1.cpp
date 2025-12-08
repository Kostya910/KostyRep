#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251>null");
	int num_1, num_2;
	cout << "Введите два множителя" << endl;
	cin >> num_1;
	cin >> num_2;
	cout << "Произведение: " << num_1 * num_2;  // Произведение двух чисел 
}