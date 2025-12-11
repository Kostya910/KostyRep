//__________________________ВАРИАНТ 6________________________
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// функция для установки цвета по названию
void setConsoleColor(const string& color) {
    if (color == "red") {
        system("color 44"); // красный фон + белый текст
    }
    else if (color == "blue") {
        system("color 11"); // синий фон + белый текст
    }
    else if (color == "green") {
        system("color 22"); // зелёный фон + белый текст
    }
    else if (color == "yellow") {
        system("color 66"); // жёлтый фон + белый текст
    }
    else if (color == "white") {
        system("color 77"); // белый фон + чёрный текст
    }
    else {
        system("color 00"); // по умолчанию: чёрный фон + белый текст
    }
}

int main() {
    setlocale(0, "");
    string color;
    string name;

    ifstream fin("settings.txt"); //Создает объект fin для чтения из файла и открывает файл

    if (fin.is_open()) {// Проверка открытия файла
        // читаем сохраненные данные
        fin >> color >> name;// Читает данные из файла (аналогично cin)
        fin.close(); //Закрывает файл и освобождает ресурсы

        setConsoleColor(color);

        cout << "Сохраненные настройки:" << endl;
        cout << "Любимый цвет: " << color << endl;
        cout << "Ваше имя " << name << endl;

        char choice;
        cout << "\nХотите изменить настройки? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            cout << "Введите новый любимый цвет (red, blue, green, yellow, white): ";
            cin >> color;
            cout << "Введите новое имя: ";
            cin >> name;

            ofstream fout("settings.txt"); //Создает объект fout для записи в файл и открывает файл
            //ofstream fout("settings.txt", ios::app); // Открываем для добавления, если нужно внести еще какие-то параметры в файл ios::app, если не указывать по умолчанию очищает
            fout << color << " " << name; //Записывает данные в файл (аналогично cout)
            fout.close();

            cout << "Настройки обновлены!" << endl;
        }
    }
    else {
        // файла нет – вводим новые настройки
        cout << "Введите любимый цвет (red, blue, green, yellow, white): ";
        cin >> color;
        cout << "Введите имя: ";
        cin >> name;

        ofstream fout("settings.txt");
        fout << color << " " << name;
        fout.close();

        cout << "Настройки сохранены!" << endl;
    }

    return 0;
}
