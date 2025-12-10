//_______________ВАРИАНТ 6_______________
#include <iostream>
#include <cmath>
/// <summary>
/// Вычисление площади треугольника через основание и высоту
/// </summary>
/// <param name="base">Длина основания треугольника</param>
/// <param name="height">Длина высоты треугольника</param>
/// <returns>Площадь треугольника</returns>
double TriangleArea(int base, int height)
{
	double Square = (base * height) / 2; //+1 к η1
	return Square; //+1 к η1
}
int main() 
{
	system("chcp 1251 > null"); 
	double base, height;
	std::cout << "Введите основание и высоту" << std::endl; 
	std::cin >> base >> height; 
	std::cout << "Площадь = " << TriangleArea(base, height); 
	//Gillb = 2 + 0 = 2
}