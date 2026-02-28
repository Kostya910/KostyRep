#include <iostream>
using namespace std;

class PhysicsCalculator {
public:
    static double velocity(double a, double b) {
        double distance1 = distance(a, b);
        double time1 = time(a, b);
        return distance1 / time1;
    }

    static double distance(double a, double b) {
        double distance = a - b;
        distance < 0 ? distance = -distance : distance;
        return distance;
    }

    static double time(double a, double b) {
        return a / b;
    }

    static double acceleration(double a, double b) {
        double velocity1 = velocity(a, b);
        double time1 = time(a, b);
        return velocity1 / time1;
    }
};

int main()
{
    system("chcp 1251 > null");
    double a, b;
    cout << "Введите a и b: ";
    cin >> a >> b;

    int choice;
    cout << "Выберите действие (1-4), 0 — выход: ";
    cin >> choice;

    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Скорость: " << PhysicsCalculator::velocity(a, b) << endl;
            break;
        case 2:
            cout << "Расстояние: " << PhysicsCalculator::distance(a, b) << endl;
            break;
        case 3:
            cout << "Время: " << PhysicsCalculator::time(a, b) << endl;
            break;
        case 4:
            cout << "Ускорение: " << PhysicsCalculator::acceleration(a, b) << endl;
            break;
        default:
            cout << "Неверный выбор!" << endl;
            break;
        }

        cout << "Выберите действие (1-4), 0 — выход: ";
        cin >> choice;
    }

    return 0;
}