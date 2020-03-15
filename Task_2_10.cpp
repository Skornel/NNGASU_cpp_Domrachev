#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cout << "Enter a count of string and row\n";// Создание переменных отвечающих за размер вектора
    cin >> n >> m;  // Ввод размеров вектора
    int maximum = 0;
    int minimum = 100;
    //int str = -1; //Переменная для запоминания позиции строки

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
            if (a[i][j] >= maximum)
            {
                maximum = a[i][j];
               // str = i;
            };
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] <= minimum)
            {
                minimum = a[i][j];
                // str = i;
            };
        }
    cout << "Max is " << maximum << " Min is " << minimum << " difference is " << maximum - minimum;
    return 0;
}