// Task1_16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
bool number_is_simple(int number)
{
    for (int i = 2; i < sqrt(number) + 1; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
vector<int> gen_primes(int k)
{
    vector<int> lst;
    for (int i = 2; i < k + 1; i++)
    {
        if (number_is_simple(i))
            lst.push_back(i);
    }
    return lst;
}
int main()
{
    int k = 101;
    for (int n : gen_primes(k)) {
        cout << n << '\n';
    }
    return 0;
}

/*
SOLUTION ON PYTHON
import math
# значение K
k = 101
# Функция для определения простого числа
def number_is_simple(number):
    for i in range(2, int(math.sqrt(number)) + 1):

        if number % i == 0:
            return False
    return True
# Генерируем последовательность от 2 до K и находим простые числа
def gen_primes(k):
    lst = []
    for i in range(2, k + 1):
        if number_is_simple(i):
            lst.append(i)
    return lst
print(gen_primes(k))
*/

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
