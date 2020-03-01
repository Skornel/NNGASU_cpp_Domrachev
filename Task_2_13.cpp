#include <iostream>   // Так надо
#include <vector>     // Для вектора
using namespace std;  // Чтобы не мучатся

int main()
{
    int n, m;  
    cout << "Enter a count of string and row\n";// Создание переменных отвечающих за размер вектора
    cin >> n >> m;  // Ввод размеров вектора
    int maximum = 0;
    int str=-1; //Переменная для запоминания позиции строки

    vector < vector <int> > a(n, vector <int>(m));// Объявление вектора на n строк по m элементов 

    for (int i = 0; i < n; i++)     // Цикл, который идёт по строкам
        for (int j = 0; j < m; j++) // Цикл, который идёт по элементам
        {
            cout << "Enter a " << i + 1 << " string and " << j + 1 << " row\n";
            cin >> a[i][j]; // Заполнение вектора или массива (в данном случае ввод)
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (a[i][0] >= maximum)
            {
                maximum = a[i][0];
                str = i;
            };
        }
    for (int i = 0; i < n; i++) // Цикл, который идёт по строкам
    {
        for (int j = 0; j < m; j++) // Цикл, который идёт по элементам
            cout << a[i][j] << ' '; // Вывод элементов i строки вектора
        cout << endl;
    }
    cout << "Max elem on 1 row: " << maximum << endl<<"He's locating on "<<str+1<<" string\n";
    for (int i = 0; i < n; i++)
    {
        int temp = a[str][i];
        a[str][i] = a[0][i];
        a[0][i] = temp;
    }
    for (int i = 0; i < n; i++) // Цикл, который идёт по строкам
    {
        for (int j = 0; j < m; j++) // Цикл, который идёт по элементам
            cout << a[i][j] << ' '; // Вывод элементов i строки вектора
        cout << endl;
    }
    return 0;
}