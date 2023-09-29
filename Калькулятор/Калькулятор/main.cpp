
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
            cout << "������� �� 0 ����������" << endl;
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
        cout << "1. ������ ������ � �������������" << endl;
        cout << "0. ��������� ������ � �������������" << endl;
        cin >> choice;
        switch (choice) {
        case(1):
            cout << "������� x: ";
            cin >> x;
            while (!cin) {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "��� ����� �������� ������ �����!" << endl;
                cin >> x;
            }
            cout << endl << "������� ��������: ";
            cin >> oper;
            cout << endl << "������� y: ";
            cin >> y;
            while (!cin) {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "��� ����� �������� ������ �����!" << endl;
                cin >> y;
            }
            complete(x, y, oper);
        }
    } while (choice != 0);
}
