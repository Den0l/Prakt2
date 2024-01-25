#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int pos, a, b;

    do
    {
        system("cls");

        cout << "1.Сложение \n2.Вычитание \n3.Умножение \n4.Деление \n5.Возведение в степень \n6.Нахождения квадратного корня \n7.Нахождение 1 процента от числа \n8.Найти факториал числа \n9.Выйти из программы." << endl;

        cin >> pos;

        switch (pos)
        {
        case 1:
            cout << "Первое число: ";
            cin >> a;
            cout << "Второе число: ";
            cin >> b;
            cout << "Результат: " << (a + b) << endl;
            system("pause");
            break;
        case 2:
            cout << "Первое число: ";
            cin >> a;
            cout << "Второе число: ";
            cin >> b;
            cout << "Результат: " << (a - b) << endl;
            system("pause");
            break;
        case 3:
            cout << "Первое число: ";
            cin >> a;
            cout << "Второе число: ";
            cin >> b;
            cout << "Результат: " << (a * b) << endl;
            system("pause");
            break;
        case 4:
            cout << "Первое число: ";
            cin >> a;
            cout << "Второе число: ";
            cin >> b;
            cout << "Результат: " << (float(a) / float(b)) << endl;
            system("pause");
            break;
        case 5:
            cout << "Первое число: ";
            cin >> a;
            cout << "Второе число: ";
            cin >> b;
            cout << "Результат: " << (pow(a, b)) << endl;
            system("pause");
            break;
        case 6:
            cout << "Первое число: ";
            cin >> a;
            cout << "Результат: " << (sqrt(a)) << endl;
            system("pause");
            break;
        case 7:
            cout << "Первое число: ";
            cin >> a;
            cout << "Результат: " << float(a) / 100 << endl;
            system("pause");
            break;
        case 8:
            cout << "Первое число: ";
            cin >> a;
            b = 1;
            for (int i = 1; i <= a; i++)
            {
                b = b * i;
            }
            cout << "Результат: " << (b) << endl;
            system("pause");
            break;
        case 9:
            break;
        default:
            cout << "Нет такой команды!" << endl;
            system("pause");
            continue;
        } 
    } while (pos != 9);
}
