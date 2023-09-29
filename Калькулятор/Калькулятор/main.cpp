
#include <stdio.h>
#include <iostream>

using namespace std;

void complete(double x, double y, char oper) {
    if (oper == '+')
        cout << x + y;
    else if (oper == '-')
        cout << x - y;
    else if (oper == '*')
        cout << x * y;
    else if (oper == '/') {
        if (y == 0)
            cout << "Деление на 0 невозможно" << endl;
        else cout << x / y;
    }
}


int main()
{
    setlocale(LC_ALL, "Rus");
    double x, y;
    int choice;
    char oper;
    do {
        cout << endl;
        cout << "1. Начать работу с калькулятором" << endl;
        cout << "0. Закончить работу с калькулятором" << endl;
        cin >> choice;
        switch (choice) {
        case(1):
            cout << "Введите x: ";
            cin >> x;
            while (!cin) {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "Для ввода доступны только числа!" << endl;
                cin >> x;
            }
            cout << endl << "Введите оператор: ";
            cin >> oper;
            cout << endl << "Введите y: ";
            cin >> y;
            while (!cin) {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "Для ввода доступны только числа!" << endl;
                cin >> y;
            }
            complete(x, y, oper);
        }
    } while (choice != 0);
}
