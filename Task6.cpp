#include <iostream>
#include <cstdlib>

using namespace std;

class ArrayStats {
private:
	int* arr;
	int size;
public:
	ArrayStats() : arr(0), size(0) {}
	void setArray(int size)
	{
		arr = new int[size];
		srand(time(0));
		for (int i = 0; i <= size; i++) 
		{
			arr[i] = rand() % 100 + 1;
			cout << arr[i] << " " << "\t";
		}
	}
	int getSum(int size)
	{
		int Sum(0);
		for (int i = 0; i <= size; i++)
		{
			Sum += arr[i];
		}
		return Sum;
	}
	int getAverage(int size) 
	{
		int Average, Sum = getSum(size);
		Average = Sum / size;
		return Average;
	}
	int getVarianse(int size)
	{
		int avarage = getAverage(size);
		int Disp;
		for (int i = 0; i <= size; i++)
		{
			Disp = size * (pow((i - avarage), 2));
		}
		return Disp;
	}
};
int main() {
	ArrayStats arr;

	int size_arr, choice;

	system("chcp 1251 > null");

	cout << "Введите размер масссива \n";
	cin >> size_arr;
	arr.setArray(size_arr);
	cout << "\nВыберите действие\n 1 - Сумма \n 2 - Среднее арифметическое \n 3 - Дисперсия \n 0 - Стоп \n";
	cin >> choice;
	while(choice !=  0 )
	{
		switch (choice) {
		case 1:
			int Sum;
			Sum = arr.getSum(size_arr);
			cout << "Сумма = " << Sum << "\n";
			break;
		case 2:
			int aver;
			aver = arr.getAverage(size_arr);
			cout << "Ср.арифметическое = " << aver << "\n";
			break;
		case 3:
			int Disp;
			Disp = arr.getVarianse(size_arr);
			cout << "Дисперсия = " << Disp << "\n";
			break;
		default:
			break;
		}
		cout << "\nВыберите действие\n 1 - Сумма \n 2 - Среднее арифметическое \n 3 - Дисперсия \n 0 - Стоп \n";
		cin >> choice;
	}

}