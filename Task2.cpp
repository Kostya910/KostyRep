
#include <iostream>
#include <stdexcept>

using namespace std;

void divideByZero(int a) {
    if (a == 0) {
        10 / a;
        throw runtime_error("Деление на ноль!");
    }
}

void accessInvalidMemory(int massiv_num) {
    int arr[5] = { 1, 2, 3, 4, 5 };
    int value = arr[massiv_num];
    if (massiv_num > 5) {
        throw out_of_range("Выход за границы массива!");
       
    }
}

int main() {
    system("chcp 1251 > null");

    cout << "Тест обработки исключений:\n" << endl;

    try {
        int a;
        cout << "1. Попытка деления на ноль, введите делитель \n" << endl;
        cin >> a;
        divideByZero(a);
        cout << "Успешно!" << endl;
    }
    catch (const exception& e) {
        cout << "Ошибка: " << e.what() << endl;
    }

    try {
        int massiv_num;
        cout << "\n2. Попытка выхода за границы массива, введите число" << endl;
        cin >> massiv_num;
        accessInvalidMemory(massiv_num);
        cout << "Успешно!" << endl;
    }
    catch (const exception& e) {
        cout << "Ошибка: " << e.what() << endl;
    }

    try {
        int num;
        cout << "Введите число: ";
        cin >> num;

        if (num < 0) {
            throw runtime_error("Число не может быть отрицательным!");
        }

        if (num == 0) {
            throw runtime_error("Число не может быть нулем!");
        }

        cout << "Вы ввели: " << num << endl;
    }
    catch (const exception& e) {
        cout << "Ошибка: " << e.what() << endl;
    }

    cout << "\nПрограмма завершена." << endl;
    return 0;
}