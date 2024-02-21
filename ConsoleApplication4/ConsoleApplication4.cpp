// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Vector>
using namespace std;

int main()
{
    setlocale(0, "");
    const int rows = 3, columns = 5;
    double numbers[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> numbers[i][j];
        }


    }
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << numbers[i][j] << "\t";
        }
        cout << endl;


    }
    for (int i = 0; i < rows; ++i)
    {
        double s = 0;
        for (int j = 0; j < columns; ++j)
            s += numbers[i][j];
            s /= 5;
        cout << s << '\n';

    }
    return 0;
}
